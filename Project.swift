// Copyright (c) 2025 Lightricks. All rights reserved.
// Created by Tamar Milchtaich Lavi.

import ProjectDescription

let lottieLegacyTarget = Target.target(
  name: "Lottie-Legacy",
  destinations: .iOS,
  product: .staticFramework,
  productName: "LottieLegacy",
  bundleId: "com.airbnb.Lottie",
  deploymentTargets: .iOS("12.0"),
  infoPlist: "Lottie/Supporting Files/Info.plist",
  sources: ["Lottie/Sources/**"],
  headers: .headers(public: "Lottie/PublicHeaders/**", private: "Lottie/Sources/**"),
  settings: .settings(
    base: [
      "DEFINES_MODULE": false
    ]
  )
)

let lottieLegacyTestsTarget = Target.target(
  name: "Lottie-LegacyTests",
  destinations: .iOS,
  product: .uiTests,
  productName: "LottieLegacyTests",
  bundleId: "com.lightricks.LottieTests",
  deploymentTargets: .iOS("12.0"),
  sources: "LottieTests/**",
  dependencies: [.target(lottieLegacyTarget)]
)

let project = Project(
  name: "Lottie-Legacy",
  targets: [
    lottieLegacyTarget,
    lottieLegacyTestsTarget
  ]
)
