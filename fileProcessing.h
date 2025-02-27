#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

struct fileManagement {
    FILE *seedRange;
    FILE *fastionSeeds;
    FILE *ssvFastionSeeds;
    FILE *fastionEndCitySeeds;
    FILE *fastionEndCitySeedsWithCoords;
    FILE *ssvFastionEndCitySeeds;
    FILE *ssvFastionEndCitySeedsWithCoords;
    FILE *fastionEndCityShipSeeds;
    FILE *fastionEndCityShipSeedsWithCoords;
    FILE *ssvFastionEndCityShipSeeds;
    FILE *ssvFastionEndCityShipSeedsWithCoords;
};

struct seedRange{
    uint64_t startingStructureSeed;
    uint64_t endingStructureSeed;
};

void fileOpener(struct fileManagement *fileManagement);
void fileCloser(struct fileManagement *fileManagement);
void readSeedRange(struct fileManagement *fileManagement, uint64_t *startingStructureSeed, uint64_t *endingStructureSeed);