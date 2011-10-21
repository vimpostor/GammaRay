/*
  This file is part of GammaRay, the Qt application inspection and
  manipulation tool.

  Copyright (C) 2010-2011 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Kevin Funk <kevin.funk@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GAMMARAY_GVGRAPHELEMENTS_H
#define GAMMARAY_GVGRAPHELEMENTS_H

#include <QPainterPath>

namespace GammaRay
{

class GVGraph;

class GVElement
{
public:
  friend class GVGraph;

  GVElement(const QString& name) : m_name(name) {}
  GVElement() {}

  QString name() const { return m_name; }

private:
  /// The unique identifier of the element in the graph
  QString m_name;
};

class GVSubGraph : public GVElement
{
  friend class GVGraph;

public:
  GVSubGraph(const QString& name) : GVElement(name) {}
  GVSubGraph() {}

  QPainterPath path() const { return m_path; }

private:
  QPainterPath m_path;
};

  /// A struct containing the information for a GVGraph's node
class GVNode : public GVElement
{
  friend class GVGraph;

public:
  GVNode(const QString& name) : GVElement(name), m_height(0), m_width(0) {}
  GVNode() : m_height(0), m_width(0) {}

  QPoint centerPos() const { return m_centerPos; }
  QSize size() const { return QSize(m_width, m_height); }

private:
  /// The position of the center point of the node from the top-left corner
  QPoint m_centerPos;

  /// The size of the node in pixels
  double m_height, m_width;
};

/// A struct containing the information for a GVGraph's edge
class GVEdge : public GVElement
{
public:
  GVEdge(const QString& name) : GVElement(name) {}
  GVEdge() {}

  /// The source and target nodes of the edge
  QString m_source;
  QString m_target;

  /// Path of the edge's line
  QPainterPath m_path;
};

}

#endif
