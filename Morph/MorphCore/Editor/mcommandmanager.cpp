/* ============================================================
 *
 * This file is a part of Morph project
 *
 * Date        : 2011-10-26
 * @file mcommandmanager.h
 * @brief A manager which is responsible for all commands related stuff.
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

#include "mcommandmanager.h"

using namespace Morph;

MCommandManager::MCommandManager()
{
}

MCommandManager::~MCommandManager()
{
}

bool MCommandManager::registerCommand(const MString &commandName, MCreatorFunction creatorFun)
{
}

bool MCommandManager::deregisterCommand(const MString &commandName)
{
}

bool MCommandManager::executeCommand(const MString &commandName, const MArgList &args, std::vector<MString> &resulMStringList)
{
}

bool MCommandManager::executeString(const MString &commandString, std::vector<MString> &resulMStringList)
{
}

bool MCommandManager::executeUndo(std::vector<MString> &resulMStringList)
{
}

bool MCommandManager::executeRedo(std::vector<MString> &resulMStringList)
{
}

void MCommandManager::clearUndoList()
{
}

void MCommandManager::clearRedoList()
{
}

void MCommandManager::initialize()
{
}

MCommandManager* MCommandManager::getSingletonPtr()
{
}

MCommandManager& MCommandManager::getSingleton()
{
}

void MCommandManager::releaseSingleton()
{
}

QVector<MString> MCommandManager::getCommandNamesList(void) const
{
}

void MCommandManager::addCommandListener(MCommandListener* listener)
{
}

void MCommandManager::removeCommandListener(MCommandListener* listener)
{
}
}
