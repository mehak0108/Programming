void sale(List<Integer> prices) {
    var discounts = new int[prices.size()];
    var stack = new Stack<Integer>();
    for (var i = prices.size() - 1; i >= 0; i--) {
        while (!stack.isEmpty() && stack.peek() > prices.get(i))
            stack.pop();
        if (!stack.isEmpty())
            discounts[i] = stack.peek();
        stack.push(prices.get(i));
    }
    var total = 0L; 
    var sb = new StringBuilder();
    for (var i = 0; i < prices.size(); i++) {
        total += prices.get(i) - discounts[i];
        if (discounts[i] == 0)
            sb.append(i).append(" ");
    }
    System.out.printf("%s\n%s\n", total, sb.toString().trim());
}