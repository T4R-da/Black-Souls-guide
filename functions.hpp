#pragma once
#include <iostream>
#include <cstdlib>

// Black Souls 1 Endings
void BS1Endings()
{
    std::cout << "Ending A: True Ending" << std::endl;
    std::cout << "Ending B: Collapse Ending" << std::endl;
    std::cout << "Ending C: Fairy Tale Library Ending" << std::endl;
    std::cout << "Ending D: Baphomet's Pact Ending" << std::endl;

    char BS1Ending;
    do
    {
        std::cout << "Which of these endings do you need help with? " << std::endl;
        std::cin >> BS1Ending;

        if (BS1Ending == 'A')
        {
            std::cout << "Save all 10 companions, raise them to Lv100+, have 0 Sin, and after killing Cinderella choose “Everyone Together.”" << std::endl;
        }
        else if (BS1Ending == 'B')
        {
            std::cout << "Fail to save companions, let them die/monsterize, or finish with 1+ Sin → the world collapses." << std::endl;
        }
        else if (BS1Ending == 'C')
        {
            std::cout << "Collect all 32 Fairy Tale Books and return them to Wonderland’s library." << std::endl;
        }
        else if (BS1Ending == 'D')
        {
            std::cout << "Meet Baphomet in Tainted Bog with 0 Sin, complete her 4 contracts, marry her, then enter Sacred Forest with her." << std::endl;
        }
    } while (BS1Ending < 'A' || BS1Ending > 'D');
}

void BS2Endings()
{

    std::cout << "Ending A: Alice" << std::endl;
    std::cout << "Ending B: Birth" << std::endl;
    std::cout << "Ending C: Catastrophe" << std::endl;
    std::cout << "Ending D: Death" << std::endl;
    std::cout << "Ending E: Exclusion" << std::endl;
    std::cout << "Ending F: Fairy" << std::endl;
    std::cout << "Ending G: Good Ending" << std::endl;
    std::cout << "Unnamed Ending 1 [U]: Crawling Girls" << std::endl; // UE1
    std::cout << "Unnamed Ending 2 [V]: Grand Guignol" << std::endl;  // UE2
    std::cout << "Ending H: Hell & Heartbroken [2 different endings in one]" << std::endl;

    char BS2Ending;
    do
    {
        std::cout << "\nWhich of these endings do you need help with? " << std::endl;
        std::cin >> BS2Ending;
        if (BS2Ending == 'A')
        {
            std::cout << R"(To achieve this ending, defeat Tearing Beast, Dinah and [Make love] to Alice. 
            After finding the little girl, Grimm will begin to wonder, -Where is Alice?.)" << std::endl;
        }
        else if (BS2Ending == 'B')
        {
            std::cout << R"(To achieve this ending, reach Covenant Lv3 for the following heroines: White Rabbit Node, Lizard Bill, Foolish Bird Dodo, 
            Caterpillar Shisha, Duchess Margaret von Tyrol, Hatta the Hatter, Mock Turtle, Wolris the Walrus and the Tweedle Twins. 
            After doing so, talk to Node and pick [Covenant], then [Make love] and keep giving up in the dialogue to achieve the ending. 
            Moved by the decision of his beloved, Node will show Grimm the hidden side of Wonderland and reveal the true purpose of the loops.
            If Node is the last to reach Covenant Lv3, you will need to leave the room and come back to get the ending. 
            Moreover, a heroine doesn't need to be alive as long as you have upgraded her Covenant to Lv3 during the cycle.)" << std::endl;
        }
        else if (BS2Ending == 'C')
        {
            std::cout << "Lose against Tearing Beast, Dinah. After witnessing Dinah slaughter the little girl, Grimm will begin to wonder, -Where is Alice?." << std::endl;
        }
        else if (BS2Ending == 'D')
        {
            std::cout << "Defeat Tearing Beast, Dinah and choose [Kill] while having more than 0 SEN. After brutally killing the young girl, Grimm will again begin to wonder -Where is Alice?." << std::endl;
        }
        else if (BS2Ending == 'E')
        {
            std::cout << R"(After defeating Tearing Beast, Dinah choose [Kill] while having 0 SEN or less. 
            This will start a battle against an opponent depending on the Alice chosen at the start of the cycle: 
            The Black One if the Daughter was chosen, the Shadow Demoness if the Little Sister was chosen, and the Elk Goddess if the Mother was chosen instead.
            Differently from the fight against Dinah, no ending will be achieved upon defeat and the player will be simply sent to the title screen.)" << std::endl;
        }
        else if (BS2Ending == 'F')
        {
            std::cout << R"(Defeat Little Girl Alice after siding with Leaf. 
            She will return with Grimm to the Lost Empire, and copulate with him for eternity, while The Crawling One watches over, unnoticed.)" << std::endl;
        }
        else if (BS2Ending == 'G')
        {
            std::cout << R"(Defeat The Crawling Little Girls after siding with Red Hood. After the creator dies, the garden begins to collapse. 
            Red Hood is trapped in a hallway by debris with Poro while escaping, and the two are left behind fighting the 3 nightmares. 
            While running away, Grimm comes across the soul of a confused Alice Liddell, who has escaped the grasp of The Crawling One after her defeat. 
            Lewis Carroll's soul will detach from Grimm and comfort her, before leaving with the girl. 
            Grimm finally manages to escape the garden and is reunited with a one-armed Red Hood in the outside world. 
            After the story finishes, Grimm is transported again to the Library Dream. It was all for nothing.)" << std::endl;
        }
        else if (BS2Ending == 'H')
        {
            std::cout << R"(To achieve one of these endings, defeat Grand Guignol.
            After the death of the mechanical God, Wonderland begins to crumble. While trying to get out, Grimm makes a leap of faith and manages to reunite with Red Hood, who catches his hand. 
            However, the Crawling One grabs onto him while they try to escape. Realizing his nature will doom anyone who approaches him, he sacrifices himself so Red Hood can live. 
            He will be slowly consumed by a horde of Alice, losing himself as a result. This is the Hell Ending.
            If Prickett's Ring is in the inventory, one Alice, implied to be Prickett herself, will guide him out of the Chaos and back into reality. 
            Outside, he will live with Red Hood for the rest of her life. While Leaf finds herself free from her shackles, Grimm stays by Red's side in her last moments. 
            As the sun rises, Red passes, with the young girl having been given her happiest moment. This will result in the Heartbroken ending.)" << std::endl;
        }
        else if (BS2Ending == 'U') // UE1
        {
            std::cout << R"(Lose to The Crawling Little Girls. Defeated, Grimm will lose himself in a miasma of little girls, forever trapped in a cycle of copulation. 
            Note that you need to have sided with Red Hood to achieve this ending, as siding with Leaf will result in fighting Little Girl Alice instead.)" << std::endl;
        }
        else if (BS2Ending == 'V') // UE2
        {
            std::cout << R"(Pick [Offer my soul] while interacting with Grand Guignol or [Give up] after losing to it. 
            Grimm will ascend to godhood and become a Creator, planning on waging war against The Crawling One and other gods. 
            On his side is Node, prepared to bear his children and love him for eternity.)" << std::endl;
        }
    } while ((BS2Ending < 'A' || BS2Ending > 'H') && BS2Ending != 'U' && BS2Ending != 'V');
}

bool HelpChapter()
{
    char again;
    std::cout << "\n\n\nDo you need help with other chapters? (y/n) ";
    std::cin >> again;

    if (again == 'y')
    {
        system("cls");
        return true;
    }

    std::cout << "\n-END-\n";
    return false;
}