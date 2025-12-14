function votingSimulation(){
    const candidates = ['A', 'B', 'C'];
    const totalVoter = 20;
    const votes = [];
    const results = {
        'A': 0,
        'B': 0,
        'C': 0
    };

    // 1. Casting and Tallying
    for(let i = 0; i < totalVoter; i++){
        const randomIndex = Math.floor(Math.random() * candidates.length);
        const castVote = candidates[randomIndex];
        votes.push(castVote);
        results[castVote]++;
    }

    // 2. Determine Winner Logic Initialization
    let winner = '';
    let maxVote = -1;
    let tie = false;

    // 3. Find the Winner
    for(const candidate in results){
        const currentVote  = results[candidate];
        if(currentVote > maxVote){
            maxVote = currentVote;
            winner = candidate;
            tie = false;
        }else if (currentVote == maxVote){
            tie = true;
            winner = 'Tie'; // Placeholder
        }
    }

    // 4. Output and Declaration (The essential missing step!)
    console.log('--- Voting Simulation Results ---');
    console.table(results); // Display the votes cleanly

//     if (tie) {
//         // Collect all candidates who achieved the maxVote count
//         const tiedCandidates = Object.keys(results).filter(c => results[c] === maxVote);
//         console.log(` IT'S A TIE! (Max Votes: ${maxVote})`);
//         console.log(`Candidates tied for the lead: ${tiedCandidates.join(' and ')}`);
//     } else {
//         console.log(`WINNER: Candidate ${winner} with ${maxVote} votes!`);
//     }
//     console.log('---------------------------------');
// }
}
votingSimulation();