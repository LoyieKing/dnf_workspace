# dbmw PATH_EQ compact diffs (94)

## _ZL16allocStackBufferjPPhPi  [NEAR]  pm=2
```diff
+mov    0x8(%ebp),%edx
-mov    0x8(%ebp),%edx
```

## _ZN10CAppConfig11Parse_TableEPci  [DIFF]  pm=1069
```diff
-sub    $0xb0,%esp
+sub    $0xa0,%esp
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    -0x18(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd2>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0xd0>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    0x8(%ebp),%edx
+mov    %eax,0x50(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+movl   $"master_db_ip",0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcmp>
+test   %eax,%eax
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x110>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    0x8(%ebp),%edx
+add    $0x60,%edx
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
... (989 lines omitted) ...
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
-lea    -0x9c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x4(%edx),%ecx
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x137e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
-lea    -0x5c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1414>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x140e>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1420>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1415>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x141a>
-add    $0xb0,%esp
+add    $0xa0,%esp
```

## _ZN10CDBManager10InsertMailEjPcS0_jjii  [NEAR]  pm=22
```diff
-mov    %eax,-0x24(%ebp)
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
-movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x18(%ebp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## _ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild  [NEAR]  pm=10
```diff
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
```

## _ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_  [DIFF]  pm=1102
```diff
-push   %edi
-push   %esi
-sub    $0xdc,%esp
+sub    $0xc4,%esp
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x14(%ebp)
-mov    %eax,-0x20(%ebp)
-movb   $0x0,-0xb1(%ebp)
+mov    %eax,-0x10(%ebp)
+movb   $0x0,-0x15(%ebp)
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x29d>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0x261>
+mov    -0x14(%ebp),%eax
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd3>
-mov    0xc(%ebp),%eax
-lea    0x17(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xc8>
-lea    -0xb0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+lea    0x17(%eax),%edx
... (1022 lines omitted) ...
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd34>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x24(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd6e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
+mov    -0x14(%ebp),%eax
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd92>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xd96>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
-jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb0>
+jmp    <T> <_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_+0xdb4>
-add    $0xdc,%esp
+add    $0xc4,%esp
-pop    %esi
-pop    %edi
```

## _ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly  [DIFF]  pm=19
```diff
-jne    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x67>
+jne    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x6a>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %bl,%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x165>
+je     <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x161>
-jmp    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x16a>
+jmp    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x166>
```

## _ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh  [DIFF]  pm=118
```diff
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xc8>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xc1>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2a0>
-mov    -0x10(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x256>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2b9>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x109>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+imul   $0x27,%eax,%eax
+add    0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x14(%ebp),%eax
... (38 lines omitted) ...
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x21e>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x1ee>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x25d>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x220>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+mov    -0x14(%ebp),%eax
-imul   $0x27,%eax,%eax
-add    0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x29c>
+je     <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x252>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2bf>
-addl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x272>
+addl   $0x1,-0x10(%ebp)
-cmp    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xed>
-jmp    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0x2ba>
-nop
+jne    <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh+0xe6>
```

## _ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly  [DIFF]  pm=31
```diff
-add    %edx,%eax
-mov    0x14(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    0x14(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xd9>
+jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xd3>
-jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xe0>
+jne    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xda>
-jmp    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xe5>
+jmp    <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0xdf>
-je     <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0x18c>
+je     <T> <_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly+0x184>
-add    %edx,%eax
-mov    0x14(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    0x14(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
-mov    %al,-0xd(%ebp)
```

## _ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit  [NEAR]  pm=8
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## _ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild  [DIFF]  pm=26
```diff
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
-je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fb>
+je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fc>
-add    %edx,%eax
-mov    -0xc(%ebp),%edx
-add    $0x45,%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+add    $0x45,%eax
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
-je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fb>
+je     <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x1fc>
-jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x207>
+jmp    <T> <_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild+0x208>
```

## _ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh  [DIFF]  pm=136
```diff
-push   %edi
-sub    $0x6c,%esp
+sub    $0x60,%esp
-mov    %dl,-0x3c(%ebp)
-mov    %al,-0x40(%ebp)
+mov    %dl,-0x2c(%ebp)
+mov    %al,-0x30(%ebp)
-mov    %eax,-0x1c(%ebp)
-cmpb   $0x2,-0x40(%ebp)
-ja     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0xe1>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpb   $0x2,-0x30(%ebp)
+ja     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0xda>
+mov    -0xc(%ebp),%eax
-movzbl -0x3c(%ebp),%edx
+movzbl -0x2c(%ebp),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-movzbl -0x3c(%ebp),%eax
-mov    %eax,-0x44(%ebp)
+movl   $0x2ba,0x8(%esp)
+movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x2c(%ebp),%ebx
-mov    0x16(%eax),%edi
+mov    0x16(%eax),%ecx
-movzbl %al,%esi
-movzbl -0x40(%ebp),%ebx
-movl   $0x2ba,0x8(%esp)
-movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x18(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x44(%ebp),%eax
-mov    %eax,0x1c(%esp)
... (56 lines omitted) ...
+lea    -0x24(%ebp),%eax
-mov    0x18(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    %edi,0x18(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::SaveGuildMember(GRADE_CHANGE flag(%d), grade(%d), g(%d), s(%d), c(%d))",0x8(%esp)
+movzbl -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CDBManager::SaveGuildMember ERR(save_flag err(%d))",0x8(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1dd>
-movzbl -0x40(%ebp),%ebx
-movl   $0x2c9,0x8(%esp)
-movl   $&_ZZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojhE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CDBManager::SaveGuildMember ERR(save_flag err(%d))",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x20c>
+je     <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x1fe>
-jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x211>
+jmp    <T> <_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh+0x203>
-add    $0x6c,%esp
+add    $0x60,%esp
-pop    %edi
```

## _ZN10CDBManager16SaveMemberInsertEjjh  [DIFF]  pm=162
```diff
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x338>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x33e>
-lea    -0x50(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-lea    -0x48(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-lea    -0x40(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
... (82 lines omitted) ...
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x589>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x595>
-jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x590>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x595>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
+jne    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x59c>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x5a1>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x64c>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x611>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x61d>
-lea    -0x18(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
-je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x640>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x645>
+je     <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x64c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberInsertEjjh+0x651>
```

## _ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo  [DIFF]  pm=126
```diff
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
+movl   $&_ZZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfoE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"OnWriteGuildBoard Query Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%edx
+movl   $"seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()",0x8(%esp)
+movl   $0x4f07,0x4(%esp)
+mov    -0x20(%ebp),%eax
... (46 lines omitted) ...
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2ff>
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x303>
-jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2a5>
-mov    0xc(%ebp),%eax
-mov    0x13(%eax),%edx
+jmp    <T> <_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo+0x2fe>
+mov    0xc(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,%edx
-movzbl 0x9b(%eax),%edx
+movzbl 0x9b(%eax),%eax
+mov    %eax,%edx
-lea    0x17(%eax),%edx
-mov    0x10(%ebp),%eax
+add    $0x17,%eax
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    0x10(%ebp),%eax
```

## _ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic  [DIFF]  pm=396
```diff
-sub    $0x6c,%esp
+sub    $0x7c,%esp
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x3c(%ebp)
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x20c>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1f3>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x218>
+mov    -0x34(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x202>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
-mov    -0x24(%ebp),%eax
... (316 lines omitted) ...
+mov    %edx,-0x60(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x60(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5ce>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x1c(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x403>
+mov    -0x1c(%ebp),%eax
+cmp    -0x20(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x41e>
-add    $0x6c,%esp
+add    $0x7c,%esp
```

## _ZN10CDBManager18selectCollectItemsEhRiS0_RjRh  [DIFF]  pm=327
```diff
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x9d>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x96>
-lea    -0x54(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
... (247 lines omitted) ...
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x18(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x389>
-movl   $0x29ac,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_uint(total_count_) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
```

## _ZN10CDBManager18updateCollectItemsEhijh  [DIFF]  pm=93
```diff
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
+movb   $0x0,-0x9(%ebp)
-jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xbe>
+jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xc2>
-jg     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x45>
+jg     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x49>
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
-jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x81>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x85>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf3>
-mov    -0xc(%ebp),%eax
+mov    %al,-0x9(%ebp)
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf7>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf3>
-mov    -0xc(%ebp),%eax
+mov    %al,-0x9(%ebp)
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf7>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
-je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x13b>
... (13 lines omitted) ...
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f4d,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x19d>
+movl   $0x29df,0x8(%esp)
-movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a0>
-movl   $0x29df,0x8(%esp)
-movl   $&_ZZN10CDBManager18updateCollectItemsEhijhE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a2>
```

## _ZN10CDBManager19QueryCharacNoByNameEPcRjPi  [DIFF]  pm=68
```diff
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x139>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x132>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x153>
-jg     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x15a>
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1a1>
+jle    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x19a>
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1cb>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1bd>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x201>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1ef>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27c>
+movl   $0x0,-0x30(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x23d>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x22f>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x263>
+mov    -0x30(%ebp),%edx
+mov    %edx,0x4(%esp)
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x263>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x268>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27c>
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
```

## _ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild  [DIFF]  pm=66
```diff
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x1c(%ebp)
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xef>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0xe8>
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x18d>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x17e>
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x140>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x138>
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
+mov    -0x1c(%ebp),%eax
-add    $0x8,%eax
-add    -0x10(%ebp),%eax
+add    $0x20,%eax
+add    -0x14(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x189>
+je     <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x17a>
-jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x1b1>
+jmp    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x197>
-mov    -0x10(%ebp),%eax
-movzbl 0x2d(%eax),%eax
-movzbl %al,%eax
-cmp    -0xc(%ebp),%eax
-setg   %al
+mov    -0xc(%ebp),%eax
+cmp    -0x10(%ebp),%eax
+setl   %al
-jne    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x112>
+jne    <T> <_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild+0x111>
```

## _ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_  [DIFF]  pm=66
```diff
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0xcf>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0xc8>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
-mov    %eax,-0x40(%ebp)
-lea    -0x40(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x24(%ebp),%eax
-mov    0x8(%eax),%eax
+mov    0xc(%eax),%eax
-mov    %edx,0x8(%eax)
+mov    %edx,0xc(%eax)
+mov    -0x14(%ebp),%eax
+movl   $0x0,0x8(%eax)
-mov    -0x14(%ebp),%eax
-movl   $0x0,(%eax)
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c9>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c3>
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x167>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x15a>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
+movl   $0x0,-0x30(%ebp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x1a0>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x193>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
-mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2d9>
+movl   $0x0,-0x34(%ebp)
+mov    -0x30(%ebp),%eax
-lea    -0x48(%ebp),%edx
+lea    -0x34(%ebp),%edx
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x226>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x220>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
-mov    -0x48(%ebp),%edx
-mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2bf>
+mov    -0x34(%ebp),%edx
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2bf>
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jne    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x13d>
+jne    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x137>
```

## _ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic  [DIFF]  pm=45
```diff
-push   %esi
-sub    $0x30,%esp
+sub    $0x34,%esp
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x21>
+jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x20>
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x120>
+jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x10e>
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x10c>
+jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0xfa>
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x4d>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,8),%eax
-test   %eax,%eax
-je     <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x107>
+je     <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0xf6>
+mov    0xc(%ebp),%eax
+mov    0xe(%eax,%edx,8),%edx
-mov    0xe(%eax,%edx,8),%edx
-mov    0xc(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax,%edx,8),%esi
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax,%edx,8),%ebx
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    0xe(%eax,%edx,8),%edx
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%ecx
+mov    0xa(%eax,%ecx,8),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
-jmp    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x108>
-nop
-jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x2d>
+jne    <T> <_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic+0x2c>
-add    $0x30,%esp
+add    $0x34,%esp
-pop    %esi
```

## _ZN10CDBManager20updateCollectItemsGmEhiij  [DIFF]  pm=68
```diff
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x119>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x112>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0xaf>
+je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0xa8>
+movl   $&_ZZN10CDBManager20updateCollectItemsGmEhiijE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x112>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f4d,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x10d>
+movl   $0x29ff,0x8(%esp)
-movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x119>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x114>
-movl   $0x29ff,0x8(%esp)
-movl   $&_ZZN10CDBManager20updateCollectItemsGmEhiijE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x119>
+jmp    <T> <_ZN10CDBManager20updateCollectItemsGmEhiij+0x112>
```

## _ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message  [DIFF]  pm=50
```diff
-sub    $0x48,%esp
+sub    $0x58,%esp
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
-mov    0x10(%ebp),%eax
-add    $0x20a,%eax
+lea    -0x10(%ebp),%eax
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x225>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x223>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
+mov    -0x10(%ebp),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,0x20a(%eax)
-mov    0x10(%ebp),%eax
-add    $0x20e,%eax
+lea    -0x14(%ebp),%eax
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x28f>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
-lea    -0x14(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x2a5>
+mov    -0x14(%ebp),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,0x20e(%eax)
```

## _ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic  [DIFF]  pm=104
```diff
-jmp    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x285>
+jmp    <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x26b>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%eax
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x2(%eax),%edi
+add    $0x4,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%edi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%esi
+add    $0x3,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%esi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%ebx
+add    $0x2,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%ebx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
... (24 lines omitted) ...
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%edi
+add    $0x3,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%edi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%esi
+add    $0x2,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%esi
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%ebx
+add    $0x1,%eax
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%ebx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x2(%eax),%edx
+add    $0x4,%eax
+mov    0x2(%ecx,%eax,4),%edx
-je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x281>
+je     <T> <_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x267>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
```

## _ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy  [DIFF]  pm=54
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xc6>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xbf>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xf0>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0xe2>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x129>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x114>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x16d>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x151>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1a9>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x186>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1e2>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1b8>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x21b>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x1ea>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x254>
+je     <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x21c>
-jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x259>
+jmp    <T> <_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy+0x221>
```

## _ZN10CDBManager21SaveGuildWarPointListEiPjS0_  [DIFF]  pm=55
```diff
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x38,%esp
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x14>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1c>
-jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1e>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x1c>
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x12a>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x121>
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x125>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x11c>
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0xf6>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0xf4>
+movl   $0x9b7,0x8(%esp)
+movl   $&_ZZN10CDBManager21SaveGuildWarPointListEiPjS0_E12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    (%eax),%esi
+mov    (%eax),%edx
-mov    (%eax),%ebx
-movl   $0x9b7,0x8(%esp)
-movl   $&_ZZN10CDBManager21SaveGuildWarPointListEiPjS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x126>
+je     <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x11d>
-jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x13e>
+jmp    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x135>
-jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x33>
+jne    <T> <_ZN10CDBManager21SaveGuildWarPointListEiPjS0_+0x31>
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
```

## _ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout  [DIFF]  pm=37
```diff
+mov    %eax,-0x24(%ebp)
+movl   $0x0,(%esp)
+call   <T> <time>
-movl   $0x0,-0x30(%ebp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <time>
-jmp    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x10d>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x103>
+mov    -0x24(%ebp),%eax
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+add    $0xf,%eax
-add    $0xf,%eax
+mov    0xc(%ebp),%edi
-mov    0xc(%ebp),%edi
+add    $0xe,%eax
-add    $0xe,%eax
-movzbl %al,%edx
-mov    -0x30(%ebp),%eax
+movzbl %al,%eax
-mov    %edx,0x10(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x109>
+je     <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0xff>
-jne    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x30>
+jne    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x2d>
```

## _ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo  [DIFF]  pm=21
```diff
+movl   $0x6002,0x8(%esp)
+movl   $0x0,0x4(%esp)
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
-je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0xff>
+je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0xfe>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x169>
+jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x168>
-je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x164>
+je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x163>
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x169>
+jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x168>
```

## _ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History  [DIFF]  pm=180
```diff
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x148>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x143>
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x355>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x354>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
... (100 lines omitted) ...
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x305>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x302>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-lea    0x4(%eax),%edx
+add    $0x4,%eax
+mov    %eax,%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x351>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x350>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x173>
+jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x16e>
```

## _ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report  [DIFF]  pm=13
```diff
-jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x132>
+jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x134>
-jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x11e>
+jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x120>
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
-mov    0x3(%eax,%edx,4),%edx
+mov    0x3(%eax,%edx,4),%eax
+mov    %eax,%edx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-movzbl %al,%eax
+movsbl %al,%eax
```

## _ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo  [DIFF]  pm=184
```diff
-sub    $0x68,%esp
+push   %ebx
+sub    $0x64,%esp
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x20>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x97>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x91>
-lea    -0x50(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0xff>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0xf2>
-lea    -0x48(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x48(%ebp),%eax
... (104 lines omitted) ...
-lea    0x16(%eax),%edx
+add    $0x16,%eax
+lea    (%ebx,%eax,1),%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x354>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x34a>
-lea    -0x20(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-cmp    -0x10(%ebp),%eax
-jbe    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x370>
-cmpl   $0x1d,-0x10(%ebp)
-ja     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x370>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x375>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x16d>
-mov    $0x1,%eax
-leave
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x15b>
+add    $0x64,%esp
+pop    %ebx
+pop    %ebp
```

## _ZN10CDBManager24ChangeGuildNotifyMessageEijPc  [DIFF]  pm=43
```diff
-lea    -0x6022(%ebp),%eax
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
+movl   $0x6002,0x8(%esp)
+lea    -0x601e(%ebp),%eax
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0xdc>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0xdb>
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x11c>
+jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x114>
-jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x123>
+jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x11b>
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x128>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x120>
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1d6>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1c7>
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1a7>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x19f>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1d6>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1c7>
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
```

## _ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer  [DIFF]  pm=370
```diff
-sub    $0x13c,%esp
+sub    $0x12c,%esp
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
-movl   $0x20,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
-mov    %eax,-0xb0(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0xa0(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xac(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x9c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xa8(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x98(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xa4(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x94(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xa0(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x98(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x88(%ebp)
... (290 lines omitted) ...
+mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5f8>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5ce>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x644>
-lea    -0x3a(%ebp),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5f0>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
+lea    -0x32(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-movzwl -0x38(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+movzwl -0x30(%ebp),%eax
-lea    -0x3a(%ebp),%eax
+lea    -0x32(%ebp),%eax
-add    $0x13c,%esp
+add    $0x12c,%esp
```

## _ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD  [DIFF]  pm=30
```diff
-jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c7>
+jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c4>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c2>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c0>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ebx
-mov    0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c0>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ebx
-mov    0xc(%ebp),%ebx
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c0>
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
-nop
```

## _ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj  [DIFF]  pm=224
```diff
-sub    $0xa8,%esp
+sub    $0xb8,%esp
-mov    %al,-0x7c(%ebp)
+mov    %al,-0x8c(%ebp)
-movzbl -0x7c(%ebp),%edx
+movzbl -0x8c(%ebp),%edx
-mov    0x1c(%ebp),%eax
+mov    0x1c(%ebp),%eax
-mov    0x1c(%ebp),%eax
+mov    0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0xd7>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0xdd>
-lea    -0x78(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x111>
+jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x117>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x118>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x11e>
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x11d>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x161>
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x123>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x167>
-lea    -0x70(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
... (144 lines omitted) ...
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x582>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x58e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x5f6>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x602>
-lea    -0x20(%ebp),%eax
+lea    -0x74(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x654>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x660>
-lea    -0x18(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
```

## _ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack  [NEAR]  pm=8
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## _ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic  [DIFF]  pm=111
```diff
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3ce>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3cd>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x844(%ebp),%ebx
+lea    -0x848(%ebp),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x301>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x300>
+lea    -0x38(%ebp),%eax
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x178>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x177>
+mov    -0x1c(%ebp),%edx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x844(%ebp),%eax
+lea    -0x848(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x225>
... (31 lines omitted) ...
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c2>
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2fd>
-lea    -0x844(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2fc>
+lea    -0x848(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0xae>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0xad>
+mov    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3a1>
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3a0>
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c2>
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c2>
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
```

## _ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic  [DIFF]  pm=7
```diff
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b7>
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b5>
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b7>
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b5>
-mov    -0xc(%ebp),%eax
-cmp    $0x63,%eax
+cmpl   $0x63,-0xc(%ebp)
```

## _ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer  [DIFF]  pm=46
```diff
-sub    $0x9c,%esp
+sub    $0x6c,%esp
-jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x1c>
+jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x19>
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x35>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x32>
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
+mov    %eax,-0x2c(%ebp)
-mov    %eax,-0x6c(%ebp)
-mov    -0x5c(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    -0x6c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0xf2>
+je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0xe8>
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
+mov    -0x1c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11a>
+je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x110>
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
-add    $0x9c,%esp
+add    $0x6c,%esp
```

## _ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index  [DIFF]  pm=90
```diff
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x14f>
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x14e>
... (10 lines omitted) ...
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x297>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x28f>
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x297>
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x28f>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
```

## _ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History  [DIFF]  pm=15
```diff
-and    $0x1f,%eax
-movzbl %al,%eax
-mov    %eax,-0x144(%ebp)
+movzbl %al,%eax
+mov    %eax,%edx
+and    $0x1f,%edx
+mov    %edx,-0x144(%ebp)
-mov    -0x16c(%ebp),%edi
-mov    %edi,0x10(%esp)
+mov    -0x16c(%ebp),%edx
+mov    %edx,0x10(%esp)
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2eb>
+je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2ed>
-jmp    <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2f0>
+jmp    <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2f2>
```

## _ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic  [DIFF]  pm=107
```diff
-push   %ebx
-sub    $0x534,%esp
+sub    $0x538,%esp
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x22>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x242>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x231>
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x8e>
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x87>
-movzwl %ax,%ebx
+movzwl %ax,%eax
+mov    %eax,-0x10(%ebp)
-cmp    %eax,%ebx
-setge  %al
+cmp    -0x10(%ebp),%eax
+setle  %al
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xdf>
+mov    -0x10(%ebp),%eax
+mov    &_ZL18g_szNotiPacketName(,%eax,4),%eax
+mov    %eax,0x4(%esp)
+lea    -0x114(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcpy>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xdf>
-mov    &g_szNotiPacketName(,%eax,4),%eax
-mov    %eax,0x4(%esp)
-lea    -0x10d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
-mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%ebx
... (27 lines omitted) ...
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x18d>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x17c>
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x194>
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x183>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x199>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x188>
-je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23d>
+je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x22c>
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-lea    -0x10d(%ebp),%edx
+lea    -0x114(%ebp),%edx
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-add    $0x534,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## _ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward  [NEAR]  pm=4
```diff
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
```

## _ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt  [DIFF]  pm=146
```diff
-sub    $0x48,%esp
+sub    $0x38,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xc8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-jbe    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xf6>
+jbe    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xef>
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3ad>
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x360>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x12c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x11e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
... (66 lines omitted) ...
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x31b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x2dc>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x35e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x318>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3a9>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x35c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-jne    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x102>
+jne    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xfb>
```

## _ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party  [DIFF]  pm=1029
```diff
-sub    $0x91c,%esp
+sub    $0x92c,%esp
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8c6>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x98d>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7f9>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8c0>
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x3f4>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x454>
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3a(%eax),%eax
+mov    %eax,-0x8c8(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
... (949 lines omitted) ...
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7e0>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8a7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7cf>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x896>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7f5>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bc>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0xae>
+jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0xa7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x899>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x960>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-add    $0x91c,%esp
+add    $0x92c,%esp
```

## _ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker  [DIFF]  pm=32
```diff
-mov    %al,-0x9(%ebp)
+mov    %al,-0xa(%ebp)
-movzbl -0x9(%ebp),%eax
+movzbl -0xa(%ebp),%eax
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-movzbl -0x9(%ebp),%ebx
+movzbl -0xa(%ebp),%ebx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
-je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f5>
+je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1ee>
-movzbl -0x9(%ebp),%ebx
+movzbl -0xa(%ebp),%ebx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f5>
+je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1ee>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1fa>
+jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f3>
```

## _ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query  [DIFF]  pm=147
```diff
-push   %ebx
-sub    $0x644,%esp
+sub    $0x648,%esp
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x23>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x22>
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x37d>
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x323>
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x367>
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x30d>
-mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    -0x10(%ebp),%eax
-add    0xc(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-ja     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xa8>
-mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
+ja     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xa7>
+mov    -0xc(%ebp),%eax
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xf6>
-mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
-lea    0xe(%eax),%ebx
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xec>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,0xc(%esp)
... (67 lines omitted) ...
-mov    0xc(%ebp),%edx
-imul   $0x206,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x100,%eax
-mov    0x10(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-imul   $0x206,%eax,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x100,%eax
-movzwl 0xe(%eax),%eax
+add    $0x110,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x10e,%eax
+movzwl (%eax),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x38>
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x37>
-add    $0x644,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## _ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job  [DIFF]  pm=523
```diff
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6bc>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6ef>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5ef>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x622>
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x2ef>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x13(%eax),%eax
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x305>
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x23(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
... (443 lines omitted) ...
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5d6>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x609>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5c5>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5f8>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5eb>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x61e>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0xae>
+jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0xa7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x68f>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6c2>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
```

## _ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD  [DIFF]  pm=110
```diff
-push   %edi
-push   %esi
-sub    $0x4c,%esp
+sub    $0x44,%esp
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x19>
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x17>
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f5>
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x32>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x30>
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f5>
-movl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x14a>
-mov    -0x1c(%ebp),%edx
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
+movl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x145>
+mov    -0xc(%ebp),%edx
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x64>
-mov    -0x1c(%ebp),%edx
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x62>
+mov    -0xc(%ebp),%edx
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x145>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x141>
+mov    -0x10(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
... (30 lines omitted) ...
+mov    0xa(%eax),%eax
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x146>
-nop
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x64,-0x1c(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x64,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x3e>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x3c>
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1eb>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-add    $0x4c,%esp
+add    $0x44,%esp
-pop    %esi
-pop    %edi
```

## _ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB  [DIFF]  pm=344
```diff
-push   %edi
-sub    $0x7c,%esp
+sub    $0x70,%esp
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x1c(%ebp)
+movl   $0x0,-0x2c(%ebp)
+movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x4c(%ebp)
-movl   $0x0,-0x48(%ebp)
-movl   $0x0,-0x44(%ebp)
-movl   $0x0,-0x40(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x4c>
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x59>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x455>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x441>
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x7b>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x404>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3f0>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x8e>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc3>
-cmpl   $0x1,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x9e>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
... (264 lines omitted) ...
+mov    %edx,0x18(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%esi
+mov    -0x1c(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3d9>
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
-nop
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x9,-0x1c(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x9,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xcf>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x43d>
-nop
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x2,-0x20(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xd8>
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x2,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x58>
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x6b>
-add    $0x7c,%esp
+add    $0x70,%esp
-pop    %edi
```

## _ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac  [DIFF]  pm=543
```diff
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7ba>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7db>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6ed>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x70e>
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x36e>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x1d(%eax),%eax
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x37b>
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x51(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1c,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+movzbl 0x20(%eax),%eax
-mov    -0x1c(%ebp),%eax
... (463 lines omitted) ...
+lea    (%edx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6d4>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6f5>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6c3>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6e4>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d0>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6e9>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x70a>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0xae>
+jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0xa7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x78d>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7ae>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d0>
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d0>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
```

## _ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj  [DIFF]  pm=156
```diff
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0xa0>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x99>
-lea    -0x50(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x108>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0xfa>
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
... (76 lines omitted) ...
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x325>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x2fb>
-lea    -0x20(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38a>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x359>
-lea    -0x18(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
```

## _ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job  [DIFF]  pm=235
```diff
-sub    $0x87c,%esp
+sub    $0x88c,%esp
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x30(%ebp)
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x56d>
-movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x564>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x848(%ebp),%ebx
+lea    -0x84c(%ebp),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x230>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x22b>
+lea    -0x3c(%ebp),%eax
-je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x171>
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
+je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x16e>
+mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    0xc(%ebp),%eax
-shl    $0x4,%edx
-mov    0x11(%edx,%eax,1),%eax
-mov    %eax,%ebx
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%eax
+mov    -0x28(%ebp),%eax
... (155 lines omitted) ...
+mov    %eax,-0x86c(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,-0x868(%ebp)
+mov    -0x86c(%ebp),%eax
-add    -0x858(%ebp),%eax
+add    -0x868(%ebp),%eax
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x31e>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x319>
+mov    -0x2c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x540>
+je     <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x537>
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x562>
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x559>
-jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x562>
+jmp    <T> <_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job+0x559>
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-add    $0x87c,%esp
+add    $0x88c,%esp
```

## _ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party  [DIFF]  pm=145
```diff
-sub    $0x85c,%esp
+sub    $0x86c,%esp
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x30(%ebp)
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4dd>
-movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4dc>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x848(%ebp),%ebx
+lea    -0x84c(%ebp),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1e8>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1e7>
+lea    -0x3c(%ebp),%eax
-je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x14d>
-mov    -0x20(%ebp),%edx
-mov    0xc(%ebp),%ecx
+je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x14c>
+mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
-mov    0xc(%ebp),%edi
+mov    -0x28(%ebp),%edi
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x1cf>
... (65 lines omitted) ...
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%ecx
-mov    0xc(%ebp),%edi
+mov    -0x28(%ebp),%edi
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
-lea    -0x848(%ebp),%eax
+lea    -0x84c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x2d6>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x2d5>
+mov    -0x2c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4b0>
+je     <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4af>
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d2>
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d1>
-jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d2>
+jmp    <T> <_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party+0x4d1>
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-add    $0x85c,%esp
+add    $0x86c,%esp
```

## _ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi  [DIFF]  pm=125
```diff
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    0x14(%ebp),%eax
-movl   $0x1d,0x8(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x52>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x2f>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x64>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x41>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x7e>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x5b>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x8c>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x69>
+movl   $0x0,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    0x14(%ebp),%eax
+movl   $0x1d,0x8(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x123>
+mov    %al,-0x15(%ebp)
+movzbl -0x15(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x131>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
... (45 lines omitted) ...
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x2e5>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x313>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x321>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x34c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x35a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x38c>
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x39a>
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x4(%esp)
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x38c>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x39a>
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x3ca>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x3d8>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
-je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x42c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+je     <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x43a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi+0x448>
```

## _ZN12CApplication15TranslateSignalEv  [DIFF]  pm=65
```diff
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3cc>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3ca>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x39b>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x399>
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x1ba>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x390>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x1bc>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x38e>
-mov    0x8(%ebp),%edx
-mov    0x18(%edx),%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x390>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x38e>
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x242>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x244>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3cf>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3cd>
-mov    -0x14(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x2b6>
+cmpl   $0x0,-0x14(%ebp)
+jns    <T> <_ZN12CApplication15TranslateSignalEv+0x2b4>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x344>
-mov    -0x14(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x50,%edx
-mov    %eax,0x14(%esp)
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x342>
+mov    -0x14(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%ecx
+add    $0x50,%ecx
+mov    %edx,0x14(%esp)
-mov    -0x10(%ebp),%eax
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x344>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x342>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
-lea    -0x83(%ebp),%eax
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
+lea    -0x87(%ebp),%eax
-mov    %eax,-0x78(%ebp)
-movb   $0x1,-0x79(%ebp)
+mov    %eax,-0x7c(%ebp)
+movb   $0x1,-0x7d(%ebp)
-movzwl -0x81(%ebp),%eax
+movzwl -0x85(%ebp),%eax
-lea    -0x83(%ebp),%eax
+lea    -0x87(%ebp),%eax
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
```

## _ZN12CApplication4LoadEiPPc  [DIFF]  pm=18
```diff
-mov    0x8(%ebp),%edx
-mov    0x18(%edx),%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
-je     <T> <_ZN12CApplication4LoadEiPPc+0x38e>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x390>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3bd>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3bf>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f9>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
```

## _ZN13CPacketTracer19EndPacketProcessLogEj  [NEAR]  pm=10
```diff
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x8(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
```

## _ZN13CPacketTracer21WritePacketProcessLogEv  [DIFF]  pm=51
```diff
-jne    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x159>
+jne    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x157>
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x132>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x130>
+lea    -0x24(%ebp),%eax
-je     <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x127>
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x125>
+lea    -0x24(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    %edx,-0x1c(%ebp)
-fildll -0x20(%ebp)
-fldl   -0x38(%ebp)
-fdivp  %st,%st(1)
-fstpl  -0x30(%ebp)
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    %edx,-0x2c(%ebp)
+fildll -0x30(%ebp)
+fdivrl -0x38(%ebp)
+fstpl  -0x18(%ebp)
+lea    -0x24(%ebp),%eax
-fstpl  -0x28(%ebp)
-lea    -0x14(%ebp),%eax
+fstpl  -0x10(%ebp)
+lea    -0x24(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
-fldl   -0x30(%ebp)
+fldl   -0x18(%ebp)
-fldl   -0x28(%ebp)
+fldl   -0x10(%ebp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x15a>
+jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x158>
```

## _ZN13CPacketTracerC1Ev  [NEAR]  pm=12
```diff
-sub    $0x10,%esp
+sub    $0x20,%esp
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,-0xc(%ebp)
+mov    -0xc(%ebp),%edx
-jmp    <T> <_ZN13CPacketTracerC1Ev+0xa6>
+jmp    <T> <_ZN13CPacketTracerC1Ev+0xa8>
-jmp    <T> <_ZN13CPacketTracerC1Ev+0x88>
+jmp    <T> <_ZN13CPacketTracerC1Ev+0x8a>
-add    $0x10,%esp
+add    $0x20,%esp
```

## _ZN13CQueryCounter10WriteDBLogER10CDBManager  [DIFF]  pm=23
```diff
-jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2ad>
+jne    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2af>
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x28c>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x28e>
-mov    0x8(%eax,%edx,4),%edx
+mov    0x8(%eax,%edx,4),%eax
+mov    %eax,%edx
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x15e>
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x160>
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x287>
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x289>
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x288>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x28a>
-je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x256>
+je     <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x258>
-mov    0x8(%edx,%ecx,4),%ecx
-mov    %ecx,-0x4c(%ebp)
+mov    0x8(%edx,%ecx,4),%edx
+mov    %edx,-0x4c(%ebp)
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x288>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x28a>
-jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2ae>
+jmp    <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager+0x2b0>
```

## _ZN13CTcpNetSystem14OpenTcpServiceERiPKct  [DIFF]  pm=12
```diff
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-movzwl -0x2c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0x10(%esp)
+movzwl -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
```

## _ZN13CTcpNetSystem18PushTcpSendPacketQEPc  [DIFF]  pm=50
```diff
-push   %edi
-sub    $0x4c,%esp
+sub    $0x40,%esp
-lea    -0x2c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x10(%ebp)
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0xa,-0x1c(%ebp)
-jle    <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc+0xd6>
+mov    %eax,-0xc(%ebp)
+cmpl   $0xa,-0xc(%ebp)
+jle    <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc+0xd5>
+movl   $0x91,0x8(%esp)
+movl   $&_ZZN13CTcpNetSystem18PushTcpSendPacketQEPcE12__FUNCTION__,0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x6(%eax),%edi
+mov    0x6(%eax),%ecx
-movzwl %ax,%esi
+movzwl %ax,%edx
-movzwl %ax,%ebx
-movl   $0x91,0x8(%esp)
-movl   $&_ZZN13CTcpNetSystem18PushTcpSendPacketQEPcE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    -0x1c(%ebp),%eax
+movzwl %ax,%eax
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0xc(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc+0xd6>
+jmp    <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc+0xd5>
-lea    -0x2c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-add    $0x4c,%esp
+add    $0x40,%esp
-pop    %edi
```

## _ZN13CTcpNetSystem21SetEpollAcceptedPeersEv  [DIFF]  pm=30
```diff
-jne    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x187>
+jne    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x168>
-jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x14f>
+jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x14b>
+nop
-setne  %al
-test   %al,%al
-je     <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0xd9>
+je     <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0xd5>
-jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x187>
+jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x169>
+nop
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```

## _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE  [NEAR]  pm=2
```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
```

## _ZN14CNetworkThread8dispatchEPv  [DIFF]  pm=22
```diff
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c7>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x4a3>
```

## _ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi  [DIFF]  pm=55
```diff
-push   %ebx
-jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
+jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x109>
-jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x113>
+jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x10c>
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4b>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4a>
-ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x116>
+ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x10f>
-mov    %eax,-0xc(%ebp)
-cmpl   $0xffffffff,-0xc(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x6a>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+mov    %eax,-0x8(%ebp)
+cmpl   $0xffffffff,-0x8(%ebp)
+jne    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x64>
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8f>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x89>
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    %eax,-0x8(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xde>
+mov    %eax,-0x4(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xd8>
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    %eax,-0x8(%ebp)
+mov    %eax,-0x4(%ebp)
-lea    -0x3e8(%eax),%ebx
+lea    -0x3e8(%eax),%ecx
-mov    (%eax,%edx,4),%edx
-mov    -0x8(%ebp),%eax
-lea    (%edx,%eax,1),%ecx
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+add    -0x4(%ebp),%edx
-lea    0x5138(%ebx),%edx
-mov    %ecx,(%eax,%edx,4)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+add    $0x5138,%ecx
+mov    %edx,(%eax,%ecx,4)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## _ZN14CServerHandler16SendAllTcpServerEP12PacketHeader  [DIFF]  pm=16
```diff
-lea    -0xa(%eax),%ecx
-mov    0xc(%ebp),%eax
-lea    0xa(%eax),%edx
-mov    -0xc(%ebp),%eax
-add    $0xa,%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+sub    $0xa,%eax
+mov    0xc(%ebp),%edx
+lea    0xa(%edx),%ecx
+mov    -0xc(%ebp),%edx
+add    $0xa,%edx
+mov    %eax,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
```

## _ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader  [DIFF]  pm=122
```diff
-je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c1>
+je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2ac>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
-lea    -0x85(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2af>
+lea    -0x81(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x7b(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x77(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x77(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x73(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x6b(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %al,-0x67(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x6a(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x66(%ebp)
+mov    -0x20(%ebp),%eax
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
-lea    -0x85(%ebp),%eax
+lea    -0x81(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
... (42 lines omitted) ...
-mov    -0x8c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x20(%ebp),%eax
+movzbl 0x12(%eax),%eax
+movsbl %al,%ebx
+mov    -0x6b(%ebp),%ecx
+mov    -0x6f(%ebp),%edx
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
-jne    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x265>
+jne    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x250>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x25e>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x249>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2ba>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2a5>
-jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2c2>
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
+nop
+jmp    <T> <_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader+0x2b0>
```

## _ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader  [DIFF]  pm=24
```diff
-je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x283>
+je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x27f>
-mov    0x16(%eax),%eax
-mov    %eax,%edi
+mov    0x16(%eax),%edi
-mov    0x12(%eax),%eax
-mov    %eax,%esi
+mov    0x12(%eax),%esi
-je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x168>
+je     <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x164>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
-jne    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x227>
+jne    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x223>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x220>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x21c>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x27c>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x278>
-jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader+0x280>
```

## _ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader  [DIFF]  pm=111
```diff
-je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x272>
+je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x256>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0xa(%eax),%esi
+mov    -0x18(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,%ebx
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x14(%ebp)
+mov    %esi,%edx
+movzbl %dl,%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x9a>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+je     <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0xa0>
+and    $0xff,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    %esi,0xc(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
... (31 lines omitted) ...
-movzbl %al,%eax
-mov    %edx,0x8(%esp)
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
+mov    %esi,%edx
+movzbl %dl,%eax
+mov    %ebx,0x8(%esp)
-mov    -0x14(%ebp),%eax
-mov    0x6(%eax),%esi
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%ebx
+and    $0xff,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    %esi,0xc(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
-jne    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x216>
+jne    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x1fa>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x20f>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x1f3>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x24f>
-jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x273>
+jmp    <T> <_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader+0x257>
```

## _ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader  [DIFF]  pm=32
```diff
-je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32a>
+je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32d>
-je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+je     <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x330>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
-lea    -0x82(%ebp),%eax
+lea    -0x86(%ebp),%eax
+movb   $0x1,-0x7c(%ebp)
-mov    %eax,-0x77(%ebp)
-movb   $0x1,-0x78(%ebp)
-movzwl -0x80(%ebp),%eax
+mov    %eax,-0x7b(%ebp)
+movzwl -0x84(%ebp),%eax
-lea    -0x82(%ebp),%eax
+lea    -0x86(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
-jne    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2ce>
+jne    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2d1>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2c7>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x2ca>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x326>
-jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
+nop
+jmp    <T> <_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader+0x331>
```

## _ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader  [DIFF]  pm=8
```diff
-je     <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f8>
+je     <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f6>
-jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f9>
+jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f6>
-jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f9>
+jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f6>
-jmp    <T> <_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader+0x1f9>
-nop
```

## _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader  [DIFF]  pm=23
```diff
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x292>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x291>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x293>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x291>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x293>
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x291>
-mov    -0x38(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x293>
+mov    -0x38(%ebp),%eax
+mov    %eax,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x291>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x293>
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x234>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x236>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x22d>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x22f>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x291>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x293>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x289>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x28b>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x291>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x293>
```

## _ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader  [DIFF]  pm=66
```diff
-sub    $0x8c,%esp
+sub    $0x7c,%esp
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d9>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d0>
-mov    %eax,-0x24(%ebp)
-lea    -0x69(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x65(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x5f(%ebp)
+mov    %eax,-0x5b(%ebp)
-lea    -0x69(%ebp),%eax
+lea    -0x65(%ebp),%eax
-lea    -0x69(%ebp),%eax
+lea    -0x65(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x69(%ebp),%eax
+lea    -0x65(%ebp),%eax
+movzwl -0x63(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x65(%ebp),%ebx
-mov    %eax,-0x20(%ebp)
-movzwl -0x67(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x69(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-mov    -0x57(%ebp),%edi
-mov    -0x24(%ebp),%eax
+mov    -0x53(%ebp),%edi
+mov    -0x20(%ebp),%eax
-mov    -0x5b(%ebp),%ebx
+mov    -0x57(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1da>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d1>
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x17d>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x174>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x16d>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1da>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d1>
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d2>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1c9>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1da>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x1d1>
-add    $0x8c,%esp
+add    $0x7c,%esp
```

## _ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader  [DIFF]  pm=29
```diff
-je     <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dc>
+je     <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e6>
+lea    -0x3a(%ebp),%eax
+lea    0x12(%eax),%ebx
-lea    -0x3a(%ebp),%edx
-add    $0x12,%edx
-mov    %edx,0x10(%esp)
+mov    %ebx,0x10(%esp)
-mov    -0x28(%ebp),%edx
+mov    -0x28(%ebp),%eax
+mov    %eax,%edx
-jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0xd5>
+jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e7>
-jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0xd5>
+jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e7>
-jns    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jns    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e7>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e7>
-jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x180>
+jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x18a>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x179>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x183>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e7>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1d5>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1df>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e7>
```

## _ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader  [DIFF]  pm=68
```diff
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32a>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31b>
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31e>
+movl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xdd>
-movl   $0x56,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
+jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1a9>
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xeb>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xea>
-movl   $0x22,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
+movl   $0x22,-0x20(%ebp)
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
-mov    %eax,-0x90(%ebp)
+mov    %eax,-0x8c(%ebp)
-mov    -0x90(%ebp),%eax
+mov    -0x8c(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1a9>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b2>
-movl   $0x2,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
-movl   $0x0,-0x50(%ebp)
+movl   $0x2,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
+movl   $0x56,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
+nop
+movzwl -0x82(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x84(%ebp),%ebx
-mov    %eax,-0x20(%ebp)
-movzwl -0x82(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x84(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-mov    -0x50(%ebp),%edi
-mov    -0x24(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,-0x8c(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0x13(%eax),%edi
-mov    %edi,0x18(%esp)
-mov    -0x8c(%ebp),%eax
-mov    %eax,0x14(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    %edi,0x14(%esp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
-jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2ce>
+jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2bf>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2c7>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2b8>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x314>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
```

## _ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader  [DIFF]  pm=52
```diff
-sub    $0x250,%esp
+sub    $0x240,%esp
-je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x175>
-lea    -0x23e(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x165>
+lea    -0x236(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x23e(%ebp),%eax
+lea    -0x236(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
+xor    $0x1,%eax
-je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x168>
-mov    %eax,-0x18(%ebp)
-movzwl -0x23c(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x212,-0x10(%ebp)
-lea    -0x23e(%ebp),%eax
-mov    -0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
+mov    %eax,-0x10(%ebp)
+lea    -0x236(%ebp),%eax
+movl   $0x212,0x8(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
-jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x119>
+jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x109>
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x112>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x102>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x15e>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
-add    $0x250,%esp
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
+nop
+add    $0x240,%esp
```

## _ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader  [DIFF]  pm=23
```diff
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27e>
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x280>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
-mov    -0x38(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
+mov    -0x38(%ebp),%eax
+mov    %eax,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x222>
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x224>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x21b>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x21d>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x279>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
```

## _ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader  [DIFF]  pm=284
```diff
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a3>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x444>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+mov    %al,-0x31(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x2c(%ebp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x31(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x5c(%ebp)
-lea    -0x71(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
... (204 lines omitted) ...
+mov    %edx,0x18(%esp)
+mov    %eax,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
-jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x447>
+jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x3e8>
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x440>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x3e1>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x49c>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x43d>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
```

## _ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader  [DIFF]  pm=72
```diff
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ce>
-movb   $0x0,-0x29(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c9>
+movb   $0x0,-0x25(%ebp)
+movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x34(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-lea    -0x34(%ebp),%eax
-mov    %eax,0x10(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,0xc(%esp)
-lea    -0x29(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x30(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
+lea    -0x25(%ebp),%edx
+mov    %edx,0x8(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x9b>
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x96>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
-movzbl -0x29(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
+movzbl -0x25(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
-lea    -0x46(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
+lea    -0x42(%ebp),%eax
-movl   $0x4,-0x3c(%ebp)
+movl   $0x4,-0x38(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %ax,-0x34(%ebp)
-mov    %ax,-0x38(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %ax,-0x36(%ebp)
-movzwl -0x44(%ebp),%eax
+mov    %ax,-0x32(%ebp)
+movzwl -0x40(%ebp),%eax
-lea    -0x46(%ebp),%ebx
+lea    -0x42(%ebp),%ebx
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
-jne    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x172>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x16d>
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x16b>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x166>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c7>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c2>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
```

## _ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader  [DIFF]  pm=74
```diff
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x44(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x19f>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x19d>
+lea    -0x3d(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
-lea    -0x4fe(%ebp),%eax
+jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x273>
+lea    -0x502(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-cmp    $0x12c,%eax
-jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x12d>
-mov    $0x12c,%eax
-mov    %eax,-0x4f4(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x12c,-0x28(%ebp)
+jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x134>
+movl   $0x12c,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x154>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x155>
-mov    -0x28(%ebp),%edx
+mov    -0x2c(%ebp),%edx
-mov    %edx,-0x4f0(%ebp,%eax,4)
+mov    %edx,-0x4f4(%ebp,%eax,4)
-mov    -0x4f4(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
+mov    -0x20(%ebp),%eax
+cmp    -0x28(%ebp),%eax
+setl   %al
-jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x13c>
+jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x13d>
-movzwl -0x4fc(%ebp),%eax
+movzwl -0x500(%ebp),%eax
-lea    -0x4fe(%ebp),%eax
+lea    -0x502(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x273>
-jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x21b>
+jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x219>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x214>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x212>
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x273>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x270>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x26e>
```

## _ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader  [DIFF]  pm=81
```diff
-sub    $0x50,%esp
+sub    $0x40,%esp
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
-mov    %eax,-0x14(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
... (1 lines omitted) ...
-mov    %edx,0xa(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x12(%eax)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
+mov    -0x18(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
-jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1da>
+jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1d4>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1d3>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1cd>
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22f>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x229>
-add    $0x50,%esp
+add    $0x40,%esp
```

## _ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader  [DIFF]  pm=106
```diff
-sub    $0xbc,%esp
+sub    $0xac,%esp
-je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27e>
+je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x275>
-mov    %eax,-0x24(%ebp)
-lea    -0x9a(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x96(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x84(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+lea    -0x96(%ebp),%eax
+lea    0xa(%eax),%edi
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x9a(%ebp),%edi
-add    $0xa,%edi
-lea    -0x9a(%ebp),%edi
+lea    -0x96(%ebp),%edi
-je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x117>
-mov    -0x90(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x114>
+mov    -0x8c(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0xc3>
-movl   $0x1,-0x90(%ebp)
... (26 lines omitted) ...
-mov    -0x90(%ebp),%edi
-mov    -0x84(%ebp),%esi
-mov    -0x8c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x8c(%ebp),%ecx
+mov    -0x20(%ebp),%eax
+mov    0x12(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x276>
-jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x222>
+jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x219>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x21b>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x212>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x276>
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x26e>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x276>
-add    $0xbc,%esp
+add    $0xac,%esp
```

## _ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader  [DIFF]  pm=80
```diff
-sub    $0x1e0,%esp
+sub    $0x1d0,%esp
-je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20a>
+je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1fe>
-mov    %eax,-0x18(%ebp)
-lea    -0x1ce(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x1c6(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x1c4(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1bc(%ebp)
+mov    -0x10(%ebp),%eax
-lea    -0x1ce(%ebp),%ecx
+lea    -0x1c6(%ebp),%ecx
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
+mov    -0x10(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xe8>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xe2>
+movzwl -0x1c4(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x1c6(%ebp),%ebx
-mov    %eax,-0x14(%ebp)
-movzwl -0x1cc(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1ce(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
+mov    -0x10(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20d>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
+movzwl -0x1c4(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x1c6(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-movzwl -0x1cc(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1ce(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ae>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1a2>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1a7>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x19b>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x203>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1f7>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-nop
-add    $0x1e0,%esp
+add    $0x1d0,%esp
```

## _ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader  [DIFF]  pm=92
```diff
-sub    $0x50,%esp
+sub    $0x40,%esp
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x138>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x13a>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
-mov    %eax,-0x14(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
... (12 lines omitted) ...
-mov    %edx,0xe(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x12(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x16(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x16(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
+mov    -0x18(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
-jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e2>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1df>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1db>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23b>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x237>
-add    $0x50,%esp
+add    $0x40,%esp
```

## _ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader  [DIFF]  pm=37
```diff
-je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c8>
+je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
+lea    -0x1807(%ebp),%edx
+add    $0x14,%edx
-lea    -0x1807(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x296>
+je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x297>
-lea    (%eax,%edx,1),%edx
+add    %edx,%eax
+mov    %eax,%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x1807(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
+lea    -0x1807(%ebp),%ecx
+add    $0x14,%ecx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
-jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x36c>
+jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x36d>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x365>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x366>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c1>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c2>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
```

## _ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader  [DIFF]  pm=10
```diff
-je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
-je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18a>
-jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
-jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
+nop
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
```

## _ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt  [DIFF]  pm=16
```diff
-je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x60>
+je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x61>
+nop
+nop
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xdf>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xe1>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xd9>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xdb>
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x100>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x100>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x119>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x11b>
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x100>
```

## _ZN6CMySql10exec_queryEv  [DIFF]  pm=46
```diff
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
-je     <T> <_ZN6CMySql10exec_queryEv+0x9b>
+je     <T> <_ZN6CMySql10exec_queryEv+0x99>
-je     <T> <_ZN6CMySql10exec_queryEv+0x9b>
+je     <T> <_ZN6CMySql10exec_queryEv+0x99>
-jne    <T> <_ZN6CMySql10exec_queryEv+0x1b7>
+jne    <T> <_ZN6CMySql10exec_queryEv+0x1b5>
-je     <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+je     <T> <_ZN6CMySql10exec_queryEv+0x1ab>
-je     <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+je     <T> <_ZN6CMySql10exec_queryEv+0x1ab>
-je     <T> <_ZN6CMySql10exec_queryEv+0x177>
+je     <T> <_ZN6CMySql10exec_queryEv+0x175>
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+jmp    <T> <_ZN6CMySql10exec_queryEv+0x1ab>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    0x42088(%eax),%ebx
+mov    0x42088(%eax),%eax
+mov    %eax,%ebx
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
```

## _ZN6CMySql11blob_to_strEiPvi  [DIFF]  pm=36
```diff
-jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0xa1>
-mov    0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-imul   $0x6001,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x6070,%eax
-movb   $0x0,0x9(%eax)
+jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0xa0>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6079,%edx
+add    %edx,%eax
+movb   $0x0,(%eax)
-jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x8d>
-mov    0xc(%ebp),%eax
-imul   $0x6001,%eax,%eax
-add    $0x6070,%eax
-add    0x8(%ebp),%eax
-add    $0x9,%eax
+jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x8c>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6079,%edx
+add    %edx,%eax
-mov    0xc(%ebp),%eax
-imul   $0x6001,%eax,%eax
-add    $0x6070,%eax
-add    0x8(%ebp),%eax
-add    $0x9,%eax
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6079,%edx
+add    %edx,%eax
```

## _ZN6CMySql4execEj  [DIFF]  pm=15
```diff
-jmp    <T> <_ZN6CMySql4execEj+0x171>
+jmp    <T> <_ZN6CMySql4execEj+0x173>
-jne    <T> <_ZN6CMySql4execEj+0x12c>
+jne    <T> <_ZN6CMySql4execEj+0x12e>
-je     <T> <_ZN6CMySql4execEj+0x111>
+je     <T> <_ZN6CMySql4execEj+0x113>
-mov    0x8(%ebp),%edx
-mov    %eax,0x18(%edx)
-jmp    <T> <_ZN6CMySql4execEj+0x125>
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x18(%eax)
+jmp    <T> <_ZN6CMySql4execEj+0x127>
-jmp    <T> <_ZN6CMySql4execEj+0x171>
+jmp    <T> <_ZN6CMySql4execEj+0x173>
```

## _ZN6CMySql4openEPKcS1_S1_S1_  [DIFF]  pm=11
```diff
-jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x166>
+jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x164>
-je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x161>
+je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x15f>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
-jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x166>
+jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x164>
```

## _ZN6CMySql4openEPKcjS1_S1_S1_  [DIFF]  pm=11
```diff
-jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x164>
+jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x162>
-je     <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x15f>
+je     <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x15d>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
-jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x164>
+jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x162>
```

## _ZN6CMySql7get_intEiRj  [NEAR]  pm=16
```diff
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
```
