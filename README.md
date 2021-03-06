# EVE [![Build Status](https://travis-ci.com/Xerus2000/eve.svg?branch=master)](https://travis-ci.com/Xerus2000/eve)

This project aims to simulate basic lifeforms evolving and getting smarter, in a simplified manner.

## Development

### Setup

1. Install cmake & [Catch2](https://github.com/catchorg/Catch2) on your OS
2. Clone this repository:  
   HTTPS: `git clone https://github.com/Xerus2000/eve`  
   SSH: `git clone git@github.com:Xerus2000/eve.git`
3. Build 'eve' via CLion so that all tasks become available for running
4. In CLion go to `Settings > Editor > File and Code Templates` and remove the "Created by" header in c/cpp files
5. Execute this to set up the git commit message hooks:  
   `git config core.hooksPath .dev/githooks`

### Structure

All production code goes into [src](src), separated into [model](src/model), [view](src/view) and [controller](src/controller).  
[test](test) contains the tests and mirrors the source file structure.

### Classes and Inheritance

The folder structure should represent classes and inheritance.

Therefore,

- every class belongs in its own folder with the same name
- every sub-class belongs within its parents folder

Thus, as of currently we have the following directory tree:

    object
    ├── entity
    │   ├── food
    │   └── individual
    │       ├── species1
    │       ├── species2
    │       └── ...
    └── obstacle

Representing the following Inheritance Diagram:

            Object
              │
       +------+------+
    Obstacle       Entity
                     │
              +------+------+
              Food      Individual
                            │
                     +------+------+
                    Sp1    Sp2    ...

## Testing

We use [Catch2](https://github.com/catchorg/Catch2) for testing.

The tests should be in [BDD style](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#bdd-style), except for simple functions & data structures where it is usually more appropriate to use [test cases and sections](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#test-cases-and-sections).

## Git Guidelines

Commit messages use the type-scope format as seen in [Karma Runner](http://karma-runner.github.io/4.0/dev/git-commit-msg.html).

Branch names should roughly follow this convention as well, so a branch adding an individual called Fred should be called something like `feat/fred` while a branch fixing a bug in the list of individuals in the world could be named `fix/world-individuals`.

More detailed Collaboration Guidelines are being worked on in [Notion](https://www.notion.so/xerus/Kull-Convention-7666158f2c2245c5abde4be960d288ba).