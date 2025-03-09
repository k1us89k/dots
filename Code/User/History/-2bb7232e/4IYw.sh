#!/bin/bash

# Set your image directory
IMAGE_DIR="/home/kau/walls"

# Select a random image from the image directory
IMAGE=$(find "$IMAGE_DIR" -type f | shuf -n 1)

# Generate Pywal color scheme based on the selected image
wal -q -i "$IMAGE"

# Set the wallpaper with swww
swww img "$IMAGE" --transition-step 255 --transition-fps 255 --transition-type random

cp $IMAGE /home/kau/documents/wall.jpg

swaync-client -rs
swaync-client -R
pkill waybar
waybar &
