# _ZN10CAppConfig11Parse_TableEPci

`CAppConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805fa96` | `0x311` | `0x804e698` | `0x311` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,227 +1,227 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1c>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x307>
 cmpl   $0x7,0x10(%ebp)
 jg     <T> <_ZN10CAppConfig11Parse_TableEPci+0x220>
 movl   $0x2,0xc(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x2,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x302>
 cmpl   $0x7,0x10(%ebp)
 ja     <T> <_ZN10CAppConfig11Parse_TableEPci+0x20c>
 mov    0x10(%ebp),%eax
 shl    $0x2,%eax
 mov    &data#390c5276(.rodata)(%eax),%eax
 jmp    *%eax
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4(%eax)
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x6(%eax)
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0xa(%eax)
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x8(%eax)
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    -0x2c(%ebp),%eax
 lea    -0x1d(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsaSERKSs>
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x120>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12d>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x148>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x28(%eax)
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    -0x2c(%ebp),%eax
 lea    -0x15(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 lea    0x2c(%eax),%edx
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsaSERKSs>
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1c1>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1ce>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1e9>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x30(%eax)
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x216>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x307>
 mov    $0x1,%eax
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x307>
 movl   $0x6,0xc(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x6,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x302>
 movl   $0x16,(%esp)
 call   <T> <_Znwj>
 mov    %eax,-0x50(%ebp)
 mov    -0x50(%ebp),%ebx
 mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %al,0x2(%ebx)
 mov    -0x50(%ebp),%ebx
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %al,(%ebx)
 mov    -0x50(%ebp),%ebx
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %al,0x1(%ebx)
-mov    -0x3c(%ebp),%edx
-mov    -0x50(%ebp),%eax
-add    $0x3,%eax
+mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%edx
+add    $0x3,%edx
 movl   $0x10,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    -0x50(%ebp),%ebx
 mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %ax,0x14(%ebx)
 mov    -0x50(%ebp),%eax
 lea    0x2(%eax),%edx
 lea    -0x50(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP12stServerInfoEC1IRhRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
 lea    -0x14(%ebp),%eax
 lea    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 mov    $0x1,%eax
 jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x307>
 mov    $0x0,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::Parse_Table(char*, int) */

undefined4 __thiscall
CAppConfig::_ZN10CAppConfig11Parse_TableEPci(CAppConfig *this,char *param_1,int param_2)

{
  stServerInfo *psVar1;
  int iVar2;
  stServerInfo *psVar3;
  stServerInfo *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_34;
  char *local_30;
  string local_28 [7];
  allocator local_21;
  string local_20 [7];
  allocator local_19;
  pair local_18 [4];
  pair<unsigned_int_const,stServerInfo*> local_14 [8];
  
  if (*param_1 != '#') {
    if (param_2 < 8) {
      iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_34,2);
      if (iVar2 == 2) {
        switch(param_2) {
        case 0:
          iVar2 = atoi(local_30);
          this[4] = SUB41(iVar2,0);
          break;
        case 1:
          iVar2 = atoi(local_30);
          *(short *)(this + 6) = (short)iVar2;
          break;
        case 2:
          iVar2 = atoi(local_30);
          this[10] = SUB41(iVar2,0);
          break;
        case 3:
          iVar2 = atoi(local_30);
          *(short *)(this + 8) = (short)iVar2;
          break;
        case 4:
          std::allocator<char>::allocator();
                    /* try { // try from 0805fb85 to 0805fb89 has its CatchHandler @ 0805fbc3 */
          std::string::string(local_28,local_30,&local_21);
                    /* try { // try from 0805fb9a to 0805fb9e has its CatchHandler @ 0805fba1 */
          std::string::operator=((string *)(this + 0x24),local_28);
                    /* try { // try from 0805fbbc to 0805fbc0 has its CatchHandler @ 0805fbc3 */
          std::string::~string(local_28);
          std::allocator<char>::~allocator((allocator<char> *)&local_21);
          break;
        case 5:
          iVar2 = atoi(local_30);
          *(short *)(this + 0x28) = (short)iVar2;
          break;
        case 6:
          std::allocator<char>::allocator();
                    /* try { // try from 0805fc26 to 0805fc2a has its CatchHandler @ 0805fc64 */
          std::string::string(local_20,local_30,&local_19);
                    /* try { // try from 0805fc3b to 0805fc3f has its CatchHandler @ 0805fc42 */
          std::string::operator=((string *)(this + 0x2c),local_20);
                    /* try { // try from 0805fc5d to 0805fc61 has its CatchHandler @ 0805fc64 */
          std::string::~string(local_20);
          std::allocator<char>::~allocator((allocator<char> *)&local_19);
          break;
        case 7:
          iVar2 = atoi(local_30);
          *(short *)(this + 0x30) = (short)iVar2;
          break;
        default:
          return 0;
        }
        return 1;
      }
    }
    else {
      iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_50,6);
      if (iVar2 == 6) {
        psVar3 = operator_new(0x16);
        local_54 = psVar3;
        iVar2 = atoi(local_4c);
        psVar1 = local_54;
        psVar3[2] = SUB41(iVar2,0);
        iVar2 = atoi(local_48);
        psVar3 = local_54;
        *psVar1 = SUB41(iVar2,0);
        iVar2 = atoi(local_44);
        psVar3[1] = SUB41(iVar2,0);
        strncpy((char *)(local_54 + 3),local_40,0x10);
        psVar1 = local_54;
        iVar2 = atoi(local_3c);
        *(short *)(psVar1 + 0x14) = (short)iVar2;
        std::pair<unsigned_int_const,stServerInfo*>::pair<unsigned_char&,stServerInfo*&>
                  (local_14,(uchar *)(local_54 + 2),&local_54);
        std::
        multimap<unsigned_int,stServerInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stServerInfo*>>>
        ::insert(local_18);
        return 1;
      }
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFAppConfig.cpp](source/DNFServer/GameServer/Monitor/DNFAppConfig.cpp)（约第 65 行）：

```cpp
bool CAppConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    if (idx < 8)
    {
        char pad_if[4];
        char* tokens[2];
        if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 2) == 2)
        {
            switch (idx)
            {
            case 0:
                m_frameCountValue = (unsigned char)atoi(tokens[1]);
                break;
            case 1:
                m_serverUdpPort = (unsigned short)atoi(tokens[1]);
                break;
            case 2:
                m_serverGroup = (unsigned char)atoi(tokens[1]);
                break;
            case 3:
                m_serverTcpPort = (unsigned short)atoi(tokens[1]);
                break;
            case 4:
                m_str1 = std::string(tokens[1]);
                break;
            case 5:
                m_ushort28 = (unsigned short)atoi(tokens[1]);
                break;
            case 6:
                m_str2 = std::string(tokens[1]);
                break;
            case 7:
                m_ushort30 = (unsigned short)atoi(tokens[1]);
                break;
            default:
                return 0;
            }
            return 1;
        }
    }
    else
    {
        char pad_else[4];
        char* tokens[6];
        if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 6) == 6)
        {
            stServerInfo* si = (stServerInfo*)operator new(0x16);
            si->m_type = (unsigned char)atoi(tokens[1]);
            si->m_field0 = (unsigned char)atoi(tokens[2]);
            si->m_group = (unsigned char)atoi(tokens[3]);
            strncpy((char*)si + 3, tokens[4], 0x10);
            si->m_port = (unsigned short)atoi(tokens[5]);
            m_serverInfo.insert(std::pair<const unsigned int, stServerInfo*>(si->m_type, si));
            return 1;
        }
    }
    return 0;
}
```
