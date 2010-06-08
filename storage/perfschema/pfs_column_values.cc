/* Copyright (C) 2008-2009 Sun Microsystems, Inc

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

/**
  @file storage/perfschema/pfs_column_values.cc
  Literal values for columns used in the performance
  schema tables (implementation).
*/

#include "sql_priv.h"
#include "pfs_column_values.h"

LEX_STRING PERFORMANCE_SCHEMA_str=
{ C_STRING_WITH_LEN("performance_schema") };

LEX_STRING mutex_instrument_prefix=
{ C_STRING_WITH_LEN("wait/synch/mutex/") };

LEX_STRING rwlock_instrument_prefix=
{ C_STRING_WITH_LEN("wait/synch/rwlock/") };

LEX_STRING cond_instrument_prefix=
{ C_STRING_WITH_LEN("wait/synch/cond/") };

LEX_STRING thread_instrument_prefix=
{ C_STRING_WITH_LEN("thread/") };

LEX_STRING file_instrument_prefix=
{ C_STRING_WITH_LEN("wait/io/file/") };
