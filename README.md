## CSX Extended

Full Changelog: [`1.2...main`](https://github.com/pepepepito0147/csx-extended/compare/1.2...main#files_bucket)

## 1.3 beta2
- [fix gcc 12.1 compilation](https://github.com/pepepepito0147/csx-extended/commit/14eeb7594163b11ba525f3d18055b3f27c4d46ac) Jul 17, 2022
- [Fix some errors](https://github.com/pepepepito0147/csx-extended/commit/ac4f208c69f21b215926eb8bef4a71a85de89cec) Dec 2, 2021
- [GCC 8.2 support](https://github.com/pepepepito0147/csx-extended/commit/4813dbbb9a57819852e0c0f2638d6b8d0c1b30f2) Oct 29, 2019
- [Sanitize load_amxscript() and add load_amxscript_ex/MF_LoadAmxScriptEx() requiring error max length](https://github.com/pepepepito0147/csx-extended/commit/8ede565d61a3820156429fa425f5a472d4ad9d88) Aug 30, 2018
- [Add or adjust a bunch of safety checks](https://github.com/pepepepito0147/csx-extended/commit/3d45467b6a53d40dda63a331f4915d1aab572bba) Aug 26, 2018
- [Comment MODULE_RELOAD_ON_MAP_CHANGE on modules that use USE_METAMOD](https://github.com/pepepepito0147/csx-extended/commit/ea32691291ae025dacf99f8e28db6cd5ea987ca8) Mar 9, 2018
- [meta_api.cpp: modify csstats_rank value to match amxx.cfg default value](https://github.com/pepepepito0147/csx-extended/commit/241df6d4138cbe26e877f110078c5eeb7cbccd16) Jan 5, 2015
- [Improve get_map_objectives native](https://github.com/pepepepito0147/csx-extended/commit/8279723d9312acf3693d3abf2711649ff5ec2646) Oct 25, 2014
- [Fix "meta_api.cpp" client_death/damage forwards passing alive victims on ClientKill](https://github.com/pepepepito0147/csx-extended/commit/2ebd32c4cfbd6372925f16689dd4c1a2dde83072) Aug 10, 2013
- [Fix "moduleconfig.h" client_death/damage forwards passing alive victims on ClientKill](https://github.com/pepepepito0147/csx-extended/commit/fab00d6e810100175058dae05b2d505e40328d64) Aug 10, 2013

**Compatible AMXX**
- [ ] 1.8.2
- [x] 1.9
- [x] 1.10

**OS:**

- [x] Windows
- [x] Linux

## 1.3 beta (pre-release)
- [fix gcc 12.1 compilation](https://github.com/pepepepito0147/csx-extended/commit/14eeb7594163b11ba525f3d18055b3f27c4d46ac) Jul 17, 2022
- [Fix some errors](https://github.com/pepepepito0147/csx-extended/commit/ac4f208c69f21b215926eb8bef4a71a85de89cec) Dec 2, 2021
- [GCC 8.2 support](https://github.com/pepepepito0147/csx-extended/commit/4813dbbb9a57819852e0c0f2638d6b8d0c1b30f2) Oct 29, 2019
- [Add or adjust a bunch of safety checks](https://github.com/pepepepito0147/csx-extended/commit/3d45467b6a53d40dda63a331f4915d1aab572bba) Aug 26, 2018
- [Comment MODULE_RELOAD_ON_MAP_CHANGE on modules that use USE_METAMOD](https://github.com/pepepepito0147/csx-extended/commit/ea32691291ae025dacf99f8e28db6cd5ea987ca8) Mar 9, 2018
- [meta_api.cpp: modify csstats_rank value to match amxx.cfg default value](https://github.com/pepepepito0147/csx-extended/commit/241df6d4138cbe26e877f110078c5eeb7cbccd16) Jan 5, 2015
- [Improve get_map_objectives native](https://github.com/pepepepito0147/csx-extended/commit/8279723d9312acf3693d3abf2711649ff5ec2646) Oct 25, 2014
- [Fix "meta_api.cpp" client_death/damage forwards passing alive victims on ClientKill](https://github.com/pepepepito0147/csx-extended/commit/2ebd32c4cfbd6372925f16689dd4c1a2dde83072) Aug 10, 2013
- [Fix "moduleconfig.h" client_death/damage forwards passing alive victims on ClientKill](https://github.com/pepepepito0147/csx-extended/commit/fab00d6e810100175058dae05b2d505e40328d64) Aug 10, 2013

**Compatible AMXX**
- [x] 1.8.2
- [ ] 1.9
- [ ] 1.10

**OS:**

- [x] Windows
- [x] Linux

## 1.2 release

- Now Module uses Binary Search instead of slow old Sequential Search for some natives like `get_stats()`, `get_stats2()`, `get_user_rank()` etc.
- `get_user_rank(id)` native is added.
- `force_save_stats()` native is now modified to take custom file path for saving stats file.
- Removed `get_user_score()` native.
- Changed `reset_user_score()` from native to stock, as `set_user_score()` and this, has the same function.
- Changed `get_stats_size()` from native to stock.
- Modified _csstats.inc_ to keep backward compatibility intact.
- Fixed some bugs in natives.

**Compatible AMXX**
- [x] 1.8.2
- [ ] 1.9
- [ ] 1.10

**OS:**
- [x] Windows
- [x] Linux
