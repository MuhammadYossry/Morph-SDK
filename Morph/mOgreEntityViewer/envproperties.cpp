#include "envproperties.h"

EnvProperties::EnvProperties(QWidget *parent) : QWidget(parent)
{
    //DISPLAY OPTIONS
    groupDisp = new QGroupBox("Display Options");

    renderDetail = new QLabel(tr("Render Detail :"));
    renderDetailCombo = new QComboBox;
    renderDetailCombo->addItem(tr("Wireframe"));
    renderDetailCombo->addItem(tr("Points"));
    renderDetailCombo->addItem(tr("Polygons"));

    gridDispLayout = new QGridLayout;
    gridDispLayout->addWidget(renderDetail, 0, 0);
    gridDispLayout->addWidget(renderDetailCombo, 0, 1);

//    gridDispLayout->addWidget(boundingBox, 1, 0);
//    gridDispLayout->addWidget(boundBoxCheckBox, 1, 1);

//    gridDispLayout->addWidget(dispSkeleton, 2, 0);
//    gridDispLayout->addWidget(dispSkeletonCheckBox, 2, 1);

//    gridDispLayout->addWidget(lod, 3, 0);
//    gridDispLayout->addWidget(lodSlider, 3, 1);
    groupDisp->setLayout(gridDispLayout);
    ////////////////////////////////////////////

    //FOG
    groupFog = new QGroupBox("Fog Options");

    fogType = new QLabel(tr("Fog Type :"));

    fogTypeCombo = new QComboBox;
    fogTypeCombo->addItem(tr("None"));
    fogTypeCombo->addItem(tr("Linear"));
    fogTypeCombo->addItem(tr("Exponential"));
    fogTypeCombo->addItem(tr("Exponential 2"));

    fogColor = new QLabel(tr("Fog Color :"));
    fogColorBtn = new QPushButton(tr("Modify"));

    gridFogLayout = new QGridLayout;
    gridFogLayout->addWidget(fogType, 0, 0);
    gridFogLayout->addWidget(fogTypeCombo, 0, 1);
    gridFogLayout->addWidget(fogColor, 1, 0);
    gridFogLayout->addWidget(fogColorBtn, 1, 1);
    groupFog->setLayout(gridFogLayout);
    ////////////////////////////////////////////

    //SHADOW
    groupShadow = new QGroupBox("Shadow Options");

    shadowType = new QLabel(tr("Shadow Type :"));

    shadowTypeCombo = new QComboBox;
    shadowTypeCombo->addItem(tr("No Shadow"));
    shadowTypeCombo->addItem(tr("Stencil Modulative"));
    shadowTypeCombo->addItem(tr("Stencil Additive"));
    shadowTypeCombo->addItem(tr("Texture Modulative"));

    gridShadowLayout = new QGridLayout;
    gridShadowLayout->addWidget(shadowType, 0, 0);
    gridShadowLayout->addWidget(shadowTypeCombo, 0, 1);
    groupShadow->setLayout(gridShadowLayout);
    ////////////////////////////////////////////

    //Background (viewport)
    groupBackground = new QGroupBox("Background Options");

    backgroundColor = new QLabel(tr("Background Color : "));
    backgroundColorBtn = new QPushButton(tr("Modify"));

    gridBackgroundLayout = new QGridLayout;
    gridBackgroundLayout->addWidget(backgroundColor, 0, 0);
    gridBackgroundLayout->addWidget(backgroundColorBtn, 0, 1);
    groupBackground->setLayout(gridBackgroundLayout);
    //////////////////////

    //LIGHTS
    groupLights = new QGroupBox("Lights Options");

    ambientLight = new QLabel(tr("Ambient Light :"));
    ambientLightColorBtn = new QPushButton(tr("Modify"));

    //TREE
    //-->Parent
    lightsTree = new QTreeWidget(this);
    lightsTree->setHeaderLabels(QStringList(tr("Lights")));
//    //-->Children Of Parent
//    mainLight = new QTreeWidgetItem(lightsTree);
//    mainLight->setText(0, "Main Light");
//    //-->Sub-Children of Children
//    lightType = new QTreeWidgetItem(mainLight);
//    lightType->setText(0, "Type : Point");

//    QTreeWidgetItem* lightDiffuse = new QTreeWidgetItem(mainLight);
//    lightDiffuse->setText(0, "Diffuse Color : #ffffff");

//    QTreeWidgetItem* lightSpecular = new QTreeWidgetItem(mainLight);
//    lightSpecular->setText(0, "Specular Color: #ffffff");

//    QTreeWidgetItem* lightPos = new QTreeWidgetItem(mainLight);
//    lightPos->setText(0, "Position");

//    QTreeWidgetItem* lightX = new QTreeWidgetItem(lightPos);
//    lightX->setText(0, "X Pos : 0");

//    QTreeWidgetItem* lightY = new QTreeWidgetItem(lightPos);
//    lightY->setText(0, "Y Pos : 100");

//    QTreeWidgetItem* lightZ = new QTreeWidgetItem(lightPos);
//    lightZ->setText(0, "Z Pos : -500");

    //Right Click Action
    //FIXME: Replace icons.
    modifyAction = new QAction(QIcon(":/images/modify.png"), tr("Modify"), lightsTree);
    removeAction = new QAction(QIcon(":/images/remove.png"), tr("Delete"), lightsTree);

    lightsTree->addAction(modifyAction);
    lightsTree->addAction(removeAction);
    lightsTree->setContextMenuPolicy(Qt::ActionsContextMenu);

    gridLightsLayout = new QGridLayout;
    gridLightsLayout->addWidget(ambientLight, 0, 0);
    gridLightsLayout->addWidget(ambientLightColorBtn, 0, 1);
    gridLightsLayout->addWidget(lightsTree, 1, 0, 1, 2);
    groupLights->setLayout(gridLightsLayout);
    ////////////////////////////////////////////

    regroupLayout = new QVBoxLayout;
    regroupLayout->addWidget(groupDisp);
    regroupLayout->addWidget(groupFog);
    regroupLayout->addWidget(groupShadow);
    regroupLayout->addWidget(groupBackground);
    regroupLayout->addWidget(groupLights);
    setLayout(regroupLayout);
}

EnvProperties::~EnvProperties()
{

}
