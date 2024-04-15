#ifndef GUARD_POKEMON_JUMP_H
#define GUARD_POKEMON_JUMP_H

#include "main.h"

extern const u16 gMinigameDigits_Pal[];
extern const u32 gMinigameDigits_Gfx[];

void StartPokemonJump(u16 partyId, MainCallback exitCallback);
bool32 IsSpeciesAllowedInPokemonJump(u16 species);
void IsPokemonJumpSpeciesInParty(void);
void ResetPokemonJumpRecords(void);
void ShowPokemonJumpRecords(void);

#endif // GUARD_POKEMON_JUMP_H
