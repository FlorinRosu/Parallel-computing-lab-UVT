# C Dev Container with OpenMP and MPI
FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Install build essentials, OpenMP, and MPI
RUN apt-get update && \
    apt-get install -y build-essential gcc g++ libomp-dev libopenmpi-dev openmpi-bin cmake && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

WORKDIR /workspaces
