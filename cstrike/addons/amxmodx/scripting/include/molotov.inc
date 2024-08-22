/**
 * Checks if the player has grenade.
 *
 * @param id    Player`s index.
 *
 * @return      True if the player has a grenade, false otherwise.
 */
native IsUserHasMolotov(id);

/**
 * Give health nade with specified parameters to specified player.
 *
 * @param id    Player`s index.
 *
 * @return      grenade item index or HN_NULLENT if operation fails.
 */
native GiveUserMolotov(id);