
#if defined _csstats_extended_included
  #endinput
#endif
#define _csstats_extended_included

/*
* Fields in Stats[8]:
* 0 - kills
* 1 - deaths
* 2 - headshots
* 3 - teamkilling
* 4 - shots
* 5 - hits
* 6 - damage
* 7 - <null>
*
* Fields in Stats2[4]:
* 0 - total defusions
* 1 - bomb defused
* 2 - bomb plants
* 3 - bomb explosions
*
* Fields in Bodyhits[8]:
* 0 - <null>
* 1 - Head
* 2 - Chest
* 3 - Stomach
* 4 - Left Hand
* 5 - Right Hand
* 6 - Left Leg
* 7 - Right Leg
*
* ''Important Note'' : Position = Rank - 1. eg. If index denotes the position of 
* rank 1 player, then index = 0. 
*/

/*** Old Natives START ***/
/* 
* For body hits fields see amxconst.inc. 
*/
native get_user_wstats(index,wpnindex,stats[8],bodyhits[8]);

/* 
* Gets round stats from given weapon index.
*/
native get_user_wrstats(index,wpnindex,stats[8],bodyhits[8]);

/*
* Gets overall stats which are stored in file on server
* and updated on every respawn or user disconnect.
* Function returns the position in stats by diff. kills to deaths. 
*/
native get_user_stats(index,stats[8],bodyhits[8]);

/* 
* Gets round stats of player. 
*/
native get_user_rstats(index,stats[8],bodyhits[8]);

/*
* Gets stats with which user have killed/hurt his victim. If victim is 0
* then stats are from all victims. If victim has not been hurt, function
* returns 0 in other case 1. User stats are reset on his respawn. 
*/
native get_user_vstats(index,victim,stats[8],bodyhits[8],wpnname[]="",len=0);

/*
* Gets stats with which user have been killed/hurt. If killer is 0
* then stats are from all attacks. If killer has not hurt user, function
* returns 0 in other case 1. User stats are reset on his respawn. 
*/
native get_user_astats(index,wpnindex,stats[8],bodyhits[8],wpnname[]="",len=0);

/* 
* Resets life, weapon, victims and attackers user stats. 
*/
native reset_user_wstats(index);

/*
* Gets overall stats which stored in stats.dat file in amx folder
* and updated on every mapchange or user disconnect.
* Function returns next index of stats entry or 0 if no more exists. 
*/
native get_stats(index,stats[8],bodyhits[8],name[],len,authid[] = "",authidlen = 0);

/* 
* Returns number of all entries in stats. 
*/
native get_statsnum();
native get_user_stats2(index,stats2[4]);
native get_stats2(index,stats2[4],authid[] = "",authidlen = 0);

/*** Old Natives END ***/

/*
*  Sets overall stats with given parameters. --> index = id. 
*  Returns 0 if player is not valid/out of range
*  Returns new Rank
*/
native set_user_stats(index,stats[8],bodyhits[8]);
native set_user_stats2(index,stats2[4]);

/*
*  Sets overall stats with given parameters. --> index = position. 
*  Returns new Rank
*/
native set_stats(index,stats[8],bodyhits[8]);
native set_stats2(index,stats2[4]);

/*
*  Sets current session score of player --> index = id
*  Returns 0 if player is not valid/out of range
*  Returns 1
*/
native set_user_score(index,frags,deaths);

/*
*  Resets overall stats to null --> index = id.
*  Returns 0 if player is not valid/out of range
*  Returns new Rank
*
*  Note - This doesn't differentiate stats or stats2.
*  It simply nulls the entire Stats structure of index.
*/
native reset_user_stats(index)

/*
*  Resets overall stats to null --> index = position.
*  Returns new Rank
*
*  Note - This doesn't differentiate stats or stats2.
*  It simply nulls the entire Stats structure of index.
*/
native reset_stats(index)

/*
*  Adds/Pushes overall stats with given parameters.
*  Returns 0 if Stats Entry already exists or can't be created
*  Returns new Rank
*
* IMPORTANT : "unique" is based on the value of "csstats_rank" cvar 
* which sets the basis for uniquely defining a rankstats entry:
* 0 - name
* 1 - authid
* 2 - ip ( make sure to set parameter isip = 1 )
*
* WARNING : Use this function with Caution.
*/
native push_stats(const unique[],const name[],stats[8],bodyhits[8],isip=0);

/*
* Removes and Deletes the Stats Entry. --> index = position. 
*  Returns -1 if position is not found.
*  Returns 1 if successfully removed.
*/
native remove_stats(index);

/* 
*  Reloads all the stats from the file and 
*  refresh rankstats of all the connected 
*  players and also reset current score of player
*  Returns 1
*
*  Note - If the stats are not externally edited
*  then this will restore the stats from previous
*  map change or from start of HLDS as by default,
*  stats file is saved only at these moments.
*
*  If the stats file doesn't exist, the function
*  will not load stats. The stats in-game will remain
*  the same as before.
*
*  default stats file path : amxmodx/data/csstats.dat
*/
native force_load_stats();

/*
*  Saves all the stats till previous round in the file
*  Returns 1
*
*  default stats file path : amxmodx/data/csstats.dat
*  v1.2 - Now can Save the Stats file in any directory under cstrike. 
*/
native force_save_stats( const path[]="" );

/* 
*  Returns the Rank of PlayerID which is passed as first argument.
*/
native get_user_rank(id);

stock reset_user_score(id)
{
	return set_user_score( id, 0, 0 );
}

stock get_stats_size()
{
	return 8;
}