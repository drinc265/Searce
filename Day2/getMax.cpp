stack<int> stack_list;
stack<int> max_list;

cin >> n;

for( auto i = 0; i < n;i++ )
{
    cin >> query_type;

    switch(query_type)
    {
        case 1:
            cin >> insert_element;
            if(stack_list.empty())
            {
                stack_list.push(insert_element);
                max_list.push(insert_element);
            }
            else{
                if(insert_element > max_list.top())
                {
                    max_list.push(insert_element);
                }else
                {
                    max_list.push(max_list.top());
                }
                stack_list.push(insert_element);
            }
            break;
        case 2:
            if(!stack_list.empty())
            {
                stack_list.pop();
                max_list.pop();
            }

            break;
        case 3:
            cout << max_list.top() << "\n";
        default:
            break;
    }
}
