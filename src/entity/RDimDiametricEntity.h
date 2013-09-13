/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RDIMDIAMETRICENTITY_H
#define RDIMDIAMETRICENTITY_H

#include "entity_global.h"

#include "RDimensionEntity.h"
#include "RDimDiametricData.h"

class RDocument;
class RExporter;

/**
 * Aligned dimension entity class.
 *
 * \scriptable
 * \sharedPointerSupport
 * \ingroup entity
 */
class QCADENTITY_EXPORT RDimDiametricEntity: public RDimensionEntity {

    Q_DECLARE_TR_FUNCTIONS(RDimDiametricEntity)

public:
    static RPropertyTypeId PropertyCustom;
    static RPropertyTypeId PropertyHandle;
    static RPropertyTypeId PropertyType;
    static RPropertyTypeId PropertyBlock;
    static RPropertyTypeId PropertyLayer;
    static RPropertyTypeId PropertyLinetype;
    static RPropertyTypeId PropertyLineweight;
    static RPropertyTypeId PropertyColor;
    static RPropertyTypeId PropertyDrawOrder;

    static RPropertyTypeId PropertyMiddleOfTextX;
    static RPropertyTypeId PropertyMiddleOfTextY;
    static RPropertyTypeId PropertyMiddleOfTextZ;

    static RPropertyTypeId PropertyText;
    static RPropertyTypeId PropertyUpperTolerance;
    static RPropertyTypeId PropertyLowerTolerance;

    static RPropertyTypeId PropertyLinearFactor;

    static RPropertyTypeId PropertyChordPointX;
    static RPropertyTypeId PropertyChordPointY;
    static RPropertyTypeId PropertyChordPointZ;

    static RPropertyTypeId PropertyFarChordPointX;
    static RPropertyTypeId PropertyFarChordPointY;
    static RPropertyTypeId PropertyFarChordPointZ;

public:
    RDimDiametricEntity(RDocument* document, const RDimDiametricData& data,
                      RObject::Id objectId = RObject::INVALID_ID);
    virtual ~RDimDiametricEntity();

    static void init();

    virtual RDimDiametricEntity* clone() const {
        return new RDimDiametricEntity(*this);
    }

    virtual RS::EntityType getType() const {
        return RS::EntityDimDiametric;
    }

    bool setProperty(RPropertyTypeId propertyTypeId, const QVariant& value,
        RTransaction* transaction=NULL);
    QPair<QVariant, RPropertyAttributes> getProperty(
            RPropertyTypeId& propertyTypeId,
            bool humanReadable = false, bool noAttributes = false);

    virtual RDimDiametricData& getData() {
        return data;
    }

    void setData(RDimDiametricData& d) {
        data = d;
    }

    virtual const RDimDiametricData& getData() const {
        return data;
    }

    void setChordPoint(const RVector& p) {
        data.setChordPoint(p);
    }

    RVector getChordPoint() const {
        return data.getChordPoint();
    }

    void setFarChordPoint(const RVector& p) {
        data.setFarChordPoint(p);
    }

    RVector getFarChordPoint() const {
        return data.getFarChordPoint();
    }

protected:
    virtual void print(QDebug dbg) const;

protected:
    RDimDiametricData data;
};

Q_DECLARE_METATYPE(RDimDiametricEntity*)
Q_DECLARE_METATYPE(QSharedPointer<RDimDiametricEntity>)
Q_DECLARE_METATYPE(QSharedPointer<RDimDiametricEntity>*)

#endif
