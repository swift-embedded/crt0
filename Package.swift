// swift-tools-version:5.0

import PackageDescription

let package = Package(
    name: "Crt0",
    products: [
        .library(
            name: "Crt0",
            targets: ["Crt0"])
    ],
    targets: [
        .target(name: "Crt0")
    ]
)
