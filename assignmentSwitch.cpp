#include<iostream>
using namespace std;

class Programming_Langauage
{
    string Details;
    int a;

    public:
    void Language()
    {
        cout<<"------------theory about some languages------------------"<<endl;
        cout<<"About which language you want to know :"<<endl;
        cout<<"1. Assembly Language"<<endl;
        cout<<"2. C"<<endl;
        cout<<"3. C++"<<endl;
        cout<<"4. Rust"<<endl;
        cout<<"5. Go"<<endl;
        cout<<"6. Swift"<<endl;
        cout<<"7. Java"<<endl;
        cout<<"8. C#"<<endl;
        cout<<"9. Kotlin"<<endl;
        cout<<"10. TypeScript"<<endl;
        cout<<"11. JavaScript"<<endl;
        cout<<"12. PHP"<<endl;
        cout<<"13. Ruby"<<endl;
        cout<<"14. R"<<endl;
        cout<<"15. MATLAB"<<endl;
        cout<<"16. SQL"<<endl;
        cout<<"17. Python"<<endl;
        cout<<"18. Dart"<<endl;
        cout<<"19. Scala"<<endl;
        cout<<"20. Haskell"<<endl;
        cout<<"Enter the code of language :"<<endl;
        cin>>a;
    }

    void DEFINITION()
    {
        switch(a)
        {
            case 1:
            Details="Assembly is a low-level language that directly controls hardware through processor-specific instructions. It provides precise control of memory and CPU operations but is difficult to learn and maintain. It’s used in embedded systems, bootloaders, kernels, and performance-critical tasks where efficiency matters.";
            break;
            case 2:
            Details="C is a powerful low-level language offering direct memory access and efficient performance. It’s widely used in operating systems, embedded software, and system-level programming. Its minimal abstractions make it challenging but fundamental for understanding computer architecture and influencing many modern languages.";
            break;
            case 3:
            Details="C++ extends C with object-oriented and generic programming features while keeping low-level control. It’s used in game engines, real-time systems, high-performance applications, and large-scale software. Though complex, it offers strong performance, templates, STL, and powerful abstractions for demanding development.";
            break;
            case 4:
            Details="Rust is a modern systems language focused on safety, concurrency, and performance. Its ownership model prevents memory errors without garbage collection. Rust is used for system tools, embedded software, and secure backends. Though strict, it delivers reliable, high-performance applications.";
            break;
            case 5:
            Details="Go is a simple, efficient language created by Google for scalable systems and networked applications. Its goroutines make concurrency straightforward. With fast compilation, strong tooling, and a clean syntax, Go is popular for cloud services, DevOps tools, and backend development.";
            break;
            case 6:
            Details="Swift is Apple's modern language for iOS and macOS development. It offers safety features, fast performance, and expressive syntax. With optionals, type inference, and strong tooling, Swift is ideal for mobile apps and increasingly used beyond Apple platforms due to its open-source nature.";
            break;
            case 7:
            Details="Java is a widely used, object-oriented language running on the JVM with strong portability. It powers enterprise systems, Android apps, and large-scale backends. Its reliability, vast libraries, and steady evolution keep it essential for robust, cross-platform software development.";
            break;
            case 8:
            Details="C# is a versatile language in the .NET ecosystem, supporting object-oriented and functional styles. It’s used for web apps, enterprise software, and Unity game development. With features like LINQ and async/await, it offers strong productivity and excellent tooling.";
            break;
            case 9:
            Details="Kotlin is a modern JVM language interoperable with Java, offering concise syntax and null safety. Google’s preferred Android language, it reduces boilerplate and supports functional programming. Kotlin is also used for backend, mobile, and multiplatform development thanks to its flexibility.";
            break;
            case 10:
            Details="TypeScript adds static typing and modern features to JavaScript, improving reliability and maintainability. It compiles to JavaScript for browser and server compatibility. Widely used in large applications and frameworks like Angular, React, and Vue, it enhances developer productivity and code quality.";
            break;
            case 11:
            Details="JavaScript powers interactive web pages and runs in all browsers. With Node.js, it supports full-stack development. It’s versatile, supporting functional and object-oriented styles. Frameworks like React and Vue expand its capabilities, making it one of the most essential modern languages.";
            break;
             case 12:
            Details="PHP is a server-side scripting language popular for dynamic websites and content management systems like WordPress. Easy to learn and widely supported, modern PHP includes robust frameworks such as Laravel. Despite criticism, it remains vital for web development and hosting environments.";
            break;
            case 13:
            Details="Ruby is a dynamic, expressive language known for developer-friendly syntax. Ruby on Rails simplifies web development with conventions and rapid prototyping. Although less dominant today, Ruby remains popular for startups, full-stack applications, and projects emphasizing readability and productivity.";
            break;
            case 14:
            Details="R is a statistical computing language used for data analysis, visualization, and scientific research. It includes powerful libraries for modeling and graphics like ggplot2. Though not ideal for general software development, R excels in analytics, academia, bioinformatics, and data-heavy tasks.";
            break;
            case 15:
            Details="MATLAB is a high-level environment for numerical computing, simulations, and mathematical modeling. Popular in engineering and research, it offers extensive toolboxes and easy visualization. Although proprietary, MATLAB is valuable for prototyping algorithms and solving complex matrix-based computations efficiently.";
            break;
            case 16:
            Details="SQL is a domain-specific language for managing and querying relational databases. It retrieves, updates, and organizes structured data efficiently. Essential in analytics and backend development, SQL supports joins, aggregations, and indexing, forming the foundation of most modern data-driven applications.";
            break;
            case 17:
            Details="Python is a high-level, beginner-friendly language known for readability and vast libraries. It excels in automation, data science, AI, web development, and scripting. Its flexibility and strong community make it one of the most widely used languages today.";
            break;
            case 18:
            Details="Dart is Google’s language for fast, cross-platform development, especially with Flutter. It supports strong typing, async programming, and both JIT and AOT compilation. With hot-reload and a reactive UI model, Dart simplifies building mobile, web, and desktop applications.";
            break;
            case 19:
            Details="Scala combines functional and object-oriented programming on the JVM. With concise syntax, pattern matching, and immutability, it supports scalable and maintainable code. Popular with Apache Spark, Scala excels in big data, distributed systems, and backend development requiring reliability and performance.";
            break;
            case 20:
            Details="Haskell is a purely functional language emphasizing immutability, strong typing, and mathematical correctness. It uses lazy evaluation and expressive abstractions. Though niche, it’s influential in academic research, compilers, and high-assurance software requiring predictable, reliable behavior and elegant functional design.";
            break;
            default:
            Details="Enter the correct code";
            break;
        }
        cout<<"Details: "<<Details<<endl;
    }
};

int main()
{
    Programming_Langauage PL1;
    PL1.Language();
    PL1.DEFINITION();
}