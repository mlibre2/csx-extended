## CSX Extended

**Change log**

`pre-release`

- [Improve get_map_objectives native](https://github.com/pepepepito0147/csx-extended/commit/8279723d9312acf3693d3abf2711649ff5ec2646)
- [meta_api.cpp: modify csstats_rank value to match amxx.cfg default value](https://github.com/pepepepito0147/csx-extended/commit/241df6d4138cbe26e877f110078c5eeb7cbccd16)
- [Fix1 client_death/damage forwards passing alive victims on ClientKill](https://github.com/alliedmodders/amxmodx/commit/419c8f6ee672b4ccd0ed66e9b3675dbf825b57ea?diff=split)
- [Fix2 client_death/damage forwards passing alive victims on ClientKill](https://github.com/alliedmodders/amxmodx/commit/419c8f6ee672b4ccd0ed66e9b3675dbf825b57ea?diff=split#diff-0cfe7b0c1cead99a08137eec5b620d7686e442468d97341c48a45d8be54a4862)

[`1.2 release`](https://github.com/pepepepito0147/csx-extended/releases/tag/1.2)

- Now Module uses Binary Search instead of slow old Sequential Search for some natives like get_stats(), get_stats2(), get_user_rank() etc.
- get_user_rank(id) native is added.
- force_save_stats() native is now modified to take custom file path for saving stats file.
- Removed get_user_score() native.
- Changed reset_user_score() from native to stock, as set_user_score() and this, has the same function.
- Changed get_stats_size() from native to stock.
- Modified csstats.inc to keep backward compatibility intact.
- Fixed some bugs in natives.
