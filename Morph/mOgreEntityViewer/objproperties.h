/* ============================================================
 *
 * This file is a part of Morph project
 *
 * Date        : 2011-10-26
 * @file objproperties.cpp
 * @brief Object properties tab.
 *
 * Copyright (C) 2011-2012 by @author Islam Wazery <wazery at ubuntu dot com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation;
 * either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * ============================================================ */

#ifndef OBJPROPERTIES_H
#define OBJPROPERTIES_H

#include <QtGui>
#include <Ogre.h>

class ObjProperties : public QWidget
{
    Q_OBJECT

public:
    ObjProperties(QWidget *parent = 0);
    ~ObjProperties();

    void updateListAnim(Ogre::AnimationStateSet*);

    QTextEdit* nameText;
    QSpinBox* posXText;
    QSpinBox* posYText;
    QSpinBox* posZText;

    QSpinBox* rotXText;
    QSpinBox* rotYText;
    QSpinBox* rotZText;

    QSpinBox* scaleXText;
    QSpinBox* scaleYText;
    QSpinBox* scaleZText;

    QComboBox* renderDetailCombo;
    QComboBox* listAnimCombo;
    QSlider* lodSlider;
    QCheckBox* boundBoxCheckBox;
    QCheckBox* dispSkeletonCheckBox;
    QCheckBox* loopCheckBox;
    QCheckBox* playCheckBox;
    QPushButton* viewMatBtn;

public slots:
    void setObjectPosX(int value);
    void setObjectPosY(int value);
    void setObjectPosZ(int value);

    void setObjectRotX(int value);
    void setObjectRotY(int value);
    void setObjectRotZ(int value);

    void setObjectScaleX(int value);
    void setObjectScaleY(int value);
    void setObjectScaleZ(int value);

signals:
    void signalPosXChanged(int value);
    void signalPosYChanged(int value);
    void signalPosZChanged(int value);

    void signalRotXChanged(int value);
    void signalRotYChanged(int value);
    void signalRotZChanged(int value);

    void signalScaleXChanged(int value);
    void signalScaleYChanged(int value);
    void signalScaleZChanged(int value);

private:
    QLabel* name;
    QLabel* posX;
    QLabel* posY;
    QLabel* posZ;
    QLabel* rotX;
    QLabel* rotY;
    QLabel* rotZ;
    QLabel* scaleX;
    QLabel* scaleY;
    QLabel* scaleZ;
    QLabel* dispSkeleton;
    QLabel* boundingBox;
    QLabel* renderDetail;
    QLabel* lod;
    QLabel* viewMat;
    QLabel* loop;
    QLabel* playAnim;
    QLabel* listAnim;

    QGroupBox* groupObjName;
    QGroupBox* groupPos;
    QGroupBox* groupRot;
    QGroupBox* groupScale;
    QGroupBox* groupDisp;
    QGroupBox* groupMat;
    QGroupBox* groupAnim;
    QGridLayout* gridNameLayout;
    QGridLayout* gridPosLayout;
    QGridLayout* gridRotLayout;
    QGridLayout* gridScaleLayout;
    QGridLayout* gridDispLayout;
    QGridLayout* gridMatLayout;
    QGridLayout* gridAnimLayout;
    QHBoxLayout* animLayout;
    QVBoxLayout* regroupLayout;
};

#endif // OBJPROPERTIES_H
