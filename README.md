## CSX Extended

**Change log 1.2**

- Now Module uses Binary Search instead of slow old Sequential Search for some natives like get_stats(), get_stats2(), get_user_rank() etc.
- get_user_rank(id) native is added.
- force_save_stats() native is now modified to take custom file path for saving stats file.
- Removed get_user_score() native.
- Changed reset_user_score() from native to stock, as set_user_score() and this, has the same function.
- Changed get_stats_size() from native to stock.
- Modified csstats.inc to keep backward compatibility intact.
- Fixed some bugs in natives.
