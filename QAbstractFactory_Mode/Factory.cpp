//
// Created by 13704 on 2022/10/21.
//

#include "Factory.h"

AbstractApple *AFactory::CreateApple() {
    return new AApple;
}

AbstractBanana *AFactory::CreateBanana() {
    return new ABanana;
}

AbstractPear *AFactory::CreatePear() {
    return new APear;
}

AbstractApple *BFactory::CreateApple() {
    return new BApple;
}

AbstractBanana *BFactory::CreateBanana() {
    return new BBanana;
}

AbstractPear *BFactory::CreatePear() {
    return new BPear;
}

AbstractApple *CFactory::CreateApple() {
    return new CApple;
}

AbstractBanana *CFactory::CreateBanana() {
    return new CBanana;
}

AbstractPear *CFactory::CreatePear() {
    return new CPear;
}
