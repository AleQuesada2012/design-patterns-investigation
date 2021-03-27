# design-patterns-investigation
Small repository for a tasked investigation about Design Patterns, including a summary from an article and two pattern examples in c++ code.

# Article Summary
## _Impact of Object Oriented Design Patterns on Software Development_
Article  in  International Journal of Scientific and Engineering Research · March 2015

### Introduction
Object-oriented design patterns  were introduced in the 1990s as a way to solve common design problems with a general solution, considered as the standard for good design. Object-oriented design is often complex, and it's important that developers build using the knowledge of previous experienced devs, by making use of these general solutions. Originally, Christopher Alexander firstly introduced this concept, as solutions to architectural problems, addressing the doubtable property of objectivity in said quality, and discovered some shared aspects among different legacy solutions. Design patterns are also known for being reusable in the architectural level, by tools considered 'blueprints' that guide the integral development of components in a system, their reusability does not only consists of algorithms, detailed designs, interfaces or implementations, but also, descriptions of the problem, the solution, when to apply it, and consequences related to that application, as well as implementation hints and examples, systematically explaining the general design of that solution. These patterns can be applied to several areas, such as data processing, telecom, GUIs, databases and communication software.

### Related Work
Original article authors refer to some other papers and investigation examples in which different applications, considerable aspects from design patterns and their benefits and disadvantages are addressed in their [**article.**](https://www.researchgate.net/profile/Subburaj-Ramasamy/publication/273457811_Impact_of_Object_Oriented_Design_Patterns_on_Software_Development/links/572d6b4608aee02297598750/Impact-of-Object-Oriented-Design-Patterns-on-Software-Development.pdf) <br>

### Design Pattern Catalog
Patterns can be grouped according to usage and there are 3 basic classes: Structural, Creational and Behavioral.
* **Structural**: ease software design by identifying simple ways to realize relationships between entities. Very bound to Class and Object composition. Examples: adapter, decorator, bridge, facade and proxy.
* **Creational**: concerned with class instantiation, composed of two dominant ideas, encapsulating knowledge about the classes used by the system and hiding how their instances are created and combined, some examples are: abstract factory, builder, singleton and prototype.
* **Behavioral**: identify communication patterns between objects, realize the assignments of responsibilities between them, increasing flexibility in carrying out that communication. Examples: observer, interpreter, iterator, visitor, and command.

### How to Select a Design Pattern
The problem with searching patterns resides in getting information about the existing ones, and the selection process has difficulties when actually deciding which is the better choice among all available solutions. There are five main approaches for searching and selecting a pattern: repositories, catalogues, recommendation systems, formal languages, search engines, and others.  <br>
There have been different proposed ways to find the adequate design pattern for a problem, briefly explained as follows:
* Consider how patterns solve design problems: they help find appropriate objects, specify object interfaces, determine object granularity, and other ways.
* Study how patterns interrelate: consider and study relationships between them, helps devs find the right pattern or group of patterns.
* Study patterns of similar purpose: catalogs include introductory comments on patterns and conclude with comparisons and contrasts them.
* Examine causes of redesign: see if the current problem involves more of such, then look at the patterns that help in avoiding those causes.
* Consider what should be variable in the design: opposite to examining causes of redesign, this focuses on encapsulating the concept that diverges from the themes of many patterns.

### How to Use Design Patterns
* Read and understand the pros and cons for every pattern to ensure the correct pattern was selected. In this case the best way is to look at the sample code in a catalog and understand why it worked.
* Use very specific names for the pattern classes so the pattern parts and the implementation names can match.
* Establish the relationships between all the classes, interfaces, etc.
Use consistent names for the classes.

### Advantages of Design Patterns
* Makes communication easier between team members that know how the pattern works.
* Development is accelerated as there’s no need to make a solution from zero.
Makes the implementation to be more structured as they need to fit the pattern used and to be maintained in a specific way to keep the pattern working properly.
* Tends to have more reusable code and to eliminate code that works against reusability.
* Uses tried and tested solutions that will not break if implemented correctly.

### Disadvantages of Design Patterns
* Using and selecting patterns is difficult and it can only be learned with experience.
* People tend to over-complicate or under-complicate issues just to fit a certain pattern.
* Patterns increase complexity.
* Patterns need to have a good way to communicate between each other to achieve their respective goals, in this case using patterns could be the wrong approach.
* Patterns are not a solution for not having good implementation skills.
* Patterns are too abstract and programmers tend to apply patterns wrongfully.
* Using patterns doesn’t improve the quality in all cases, sometimes it can even decrease quality if applied incorrectly.

### Conclusion
From the analysis of the work, it is concluded that design patterns are not a perfect solution. As much as there are advantages, they also have a lot of disadvantages if not applied correctly.

***

### Design pattern examples
You can head to the code files in this repository where you will find `.cpp` files with c++ code, demonstrating an example of two design patterns. <br> 
Additionally, you can click [here](https://github.com/AleQuesada2012/design-patterns-investigation/blob/main/AdapterSimpleExample.cpp) to see the **Adapter** pattern, or [here](https://github.com/AleQuesada2012/design-patterns-investigation/blob/main/abstract_factory.cpp) to see the **Abstract Factory** pattern example.
