/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 1991-2007 OpenCFD Ltd.
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Class
    dsmcMeshFill

Description


SourceFiles
    dsmcMeshFillI.H
    dsmcMeshFill.C
    dsmcMeshFillIO.C


\*---------------------------------------------------------------------------*/

#ifndef dsmcMeshFillFromCFDHybrid_H
#define dsmcMeshFillFromCFDHybrid_H

#include "dsmcAllConfigurations.H"
#include "vector.H"
#include "polyMesh.H"
#include "volFields.H"
#include "dsmcCloud.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                           Class dsmcMeshFill Declaration
\*---------------------------------------------------------------------------*/

class dsmcMeshFillFromCFDHybrid
:
	public dsmcConfiguration
{

private:

    // Private data

        //- subDictionary containing the properties
//         dictionary propsDict_;


    // Private Member Functions




public:

    //- Runtime type information
    TypeName("dsmcMeshFillFromCFDHybrid");

    // Constructors

        //- Construct from components
        dsmcMeshFillFromCFDHybrid
		(
            dsmcCloud& cloud,
            const dictionary& dict
		);

    // Destructor

 		~dsmcMeshFillFromCFDHybrid();


    // Member Functions

        void setInitialConfiguration();

};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
