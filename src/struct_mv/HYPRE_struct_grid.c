/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision$
 ***********************************************************************EHEADER*/

/******************************************************************************
 *
 * HYPRE_StructGrid interface
 *
 *****************************************************************************/

#include "_hypre_struct_mv.h"

/*--------------------------------------------------------------------------
 * HYPRE_StructGridCreate
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_StructGridCreate( MPI_Comm          comm,
                        HYPRE_Int         dim,
                        HYPRE_StructGrid *grid )
{
   hypre_StructGridCreate(comm, dim, grid);

   return hypre_error_flag;
}

/*--------------------------------------------------------------------------
 * HYPRE_StructGridDestroy
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_StructGridDestroy( HYPRE_StructGrid grid )
{
   return ( hypre_StructGridDestroy(grid) );
}

/*--------------------------------------------------------------------------
 * HYPRE_StructGridSetExtents
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_StructGridSetExtents( HYPRE_StructGrid  grid,
                            HYPRE_Int        *ilower,
                            HYPRE_Int        *iupper )
{
   hypre_Index  new_ilower;
   hypre_Index  new_iupper;

   HYPRE_Int    d;

   hypre_SetIndex(new_ilower, 0);
   hypre_SetIndex(new_iupper, 0);
   for (d = 0; d < hypre_StructGridNDim((hypre_StructGrid *) grid); d++)
   {
      hypre_IndexD(new_ilower, d) = ilower[d];
      hypre_IndexD(new_iupper, d) = iupper[d];
   }

   return ( hypre_StructGridSetExtents(grid, new_ilower, new_iupper) );
}

/*--------------------------------------------------------------------------
 * HYPRE_SetStructGridPeriodicity
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_StructGridSetPeriodic( HYPRE_StructGrid  grid,
                             HYPRE_Int        *periodic )
{
   hypre_Index  new_periodic;

   HYPRE_Int    d;

   hypre_SetIndex(new_periodic, 0);
   for (d = 0; d < hypre_StructGridNDim(grid); d++)
   {
      hypre_IndexD(new_periodic, d) = periodic[d];
   }

   return ( hypre_StructGridSetPeriodic(grid, new_periodic) );
}

/*--------------------------------------------------------------------------
 * HYPRE_StructGridAssemble
 *--------------------------------------------------------------------------*/

HYPRE_Int
HYPRE_StructGridAssemble( HYPRE_StructGrid grid )
{
   return ( hypre_StructGridAssemble(grid) );
}

/*---------------------------------------------------------------------------
 * GEC0902
 * HYPRE_StructGridSetNumGhost
 * to set the numghost array inside the struct_grid_struct using an internal
 * function. This is just a wrapper.
 *--------------------------------------------------------------------------*/
HYPRE_Int
HYPRE_StructGridSetNumGhost( HYPRE_StructGrid grid, HYPRE_Int *num_ghost )
{
   return ( hypre_StructGridSetNumGhost(grid, num_ghost) );
}

#if defined(HYPRE_USE_CUDA)
HYPRE_Int
HYPRE_StructGridSetDataLocation( HYPRE_StructGrid grid, HYPRE_Int data_location )
{
   return ( hypre_StructGridSetDataLocation(grid, data_location) );
}
#endif
