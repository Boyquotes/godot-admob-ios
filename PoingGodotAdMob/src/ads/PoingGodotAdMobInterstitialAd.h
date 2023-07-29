// MIT License
//
// Copyright (c) 2023-present Poing Studios
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef PoingGodotAdMobInterstitialAd_h
#define PoingGodotAdMobInterstitialAd_h

#include "core/object/class_db.h"
#include <vector>

@import GoogleMobileAds;

class PoingGodotAdMobInterstitialAd : public Object {

    GDCLASS(PoingGodotAdMobInterstitialAd, Object);

    static PoingGodotAdMobInterstitialAd *instance;
    static void _bind_methods();

public:
    int create(Dictionary adViewDictionary);
    void load(int uid, Dictionary adRequestDictionary, PackedStringArray keywords);
    void show(int uid);
    void destroy(int uid);

    static PoingGodotAdMobInterstitialAd *get_singleton();

    PoingGodotAdMobInterstitialAd();
    ~PoingGodotAdMobInterstitialAd();
private:
    bool is_vector_interstitial_valid(int uid);
};

#endif /* PoingGodotAdMobInterstitialAd_h */
