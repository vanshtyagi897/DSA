
    int q;
    cout<<"enter no. of queries: ";
    cin>>q;
    while(q--){
        int l,r;
        cout<<"enter l and r:";
        cin>>l>>r;
        int ans= v[r]-v[l-1];
        cout<<"ans:"<<ans<<endl;

    }

    return 0;
}