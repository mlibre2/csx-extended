## CSX Extended

**Change log**

`pre-release`

- [fix gcc 12.1 compilation](https://github.com/alliedmodders/amxmodx/pull/1056/files#diff-97dd0fb8f76b6aaa579a04745299ac3893ce0ee95d972cacae18b0b9c8e62414) Jul 17, 2022
- [Fix some errors](https://github.com/alliedmodders/amxmodx/commit/3cda059669bbb0987fef1834acac66adf51f3fb1#diff-931edb327d725b58657e38dfa163b5d3138a2221f01d570dcbfbdf81ec8c3aa6) Dec 2, 2021
- [GCC 8.2 support](https://github.com/alliedmodders/amxmodx/pull/617/files#diff-97dd0fb8f76b6aaa579a04745299ac3893ce0ee95d972cacae18b0b9c8e62414) Oct 29, 2019
- [meta_api.cpp: modify csstats_rank value to match amxx.cfg default value](https://github.com/pepepepito0147/csx-extended/commit/241df6d4138cbe26e877f110078c5eeb7cbccd16) Jan 5, 2015
- [Improve get_map_objectives native](https://github.com/pepepepito0147/csx-extended/commit/8279723d9312acf3693d3abf2711649ff5ec2646) Oct 25, 2014
- [Fix "meta_api.cpp" client_death/damage forwards passing alive victims on ClientKill](https://github.com/alliedmodders/amxmodx/commit/419c8f6ee672b4ccd0ed66e9b3675dbf825b57ea?diff=split) Aug 10, 2013
- [Fix "moduleconfig.h" client_death/damage forwards passing alive victims on ClientKill](https://github.com/alliedmodders/amxmodx/commit/419c8f6ee672b4ccd0ed66e9b3675dbf825b57ea?diff=split#diff-0cfe7b0c1cead99a08137eec5b620d7686e442468d97341c48a45d8be54a4862) Aug 10, 2013

[`1.2 release`](https://github.com/pepepepito0147/csx-extended/releases/tag/1.2)

- Now Module uses Binary Search instead of slow old Sequential Search for some natives like get_stats(), get_stats2(), get_user_rank() etc.
- get_user_rank(id) native is added.
- force_save_stats() native is now modified to take custom file path for saving stats file.
- Removed get_user_score() native.
- Changed reset_user_score() from native to stock, as set_user_score() and this, has the same function.
- Changed get_stats_size() from native to stock.
- Modified csstats.inc to keep backward compatibility intact.
- Fixed some bugs in natives.
