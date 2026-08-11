# _ZN10CAppConfig11Parse_TableEPci

`CAppConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805e732` | `0x270` | `0x804bc04` | `0x282` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,178 +1,182 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x60,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x266>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x278>
 cmpl   $0x5,0x10(%ebp)
-jg     <T> <_ZN10CAppConfig11Parse_TableEPci+0x17f>
+jg     <T> <_ZN10CAppConfig11Parse_TableEPci+0x17e>
 movl   $0x2,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
-cmp    $0x2,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x261>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x2,-0x10(%ebp)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x273>
 cmpl   $0x5,0x10(%ebp)
-ja     <T> <_ZN10CAppConfig11Parse_TableEPci+0x16b>
+ja     <T> <_ZN10CAppConfig11Parse_TableEPci+0x16a>
 mov    0x10(%ebp),%eax
 shl    $0x2,%eax
-mov    &data#3dacc151(.rodata)(%eax),%eax
+mov    &data#c8eb558e(.rodata)(%eax),%eax
 jmp    *%eax
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x175>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x174>
+mov    0x8(%ebp),%eax
+lea    0x6(%eax),%ebx
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
+mov    %ax,(%ebx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x174>
 mov    0x8(%ebp),%eax
-mov    %dx,0x6(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x175>
-mov    -0x24(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
+mov    %al,(%ebx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x174>
 mov    0x8(%ebp),%eax
-mov    %dl,0xa(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x175>
-mov    -0x24(%ebp),%eax
+lea    0x8(%eax),%ebx
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %dx,0x8(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x175>
-lea    -0x15(%ebp),%eax
+mov    %ax,(%ebx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x174>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x24(%ebp),%eax
-lea    -0x15(%ebp),%edx
+mov    -0x34(%ebp),%eax
+lea    -0x25(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsaSERKSs>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x120>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x11f>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12d>
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x12c>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x148>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x147>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x15(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x15(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x175>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x174>
+mov    0x8(%ebp),%eax
+lea    0x10(%eax),%ebx
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %dx,0x10(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x175>
+mov    %ax,(%ebx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x174>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x266>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x278>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x266>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x278>
 movl   $0x6,0xc(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
-cmp    $0x6,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x261>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x6,-0xc(%ebp)
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x273>
 movl   $0x16,(%esp)
 call   <T> <_Znwj>
-mov    %eax,-0x48(%ebp)
-mov    -0x48(%ebp),%ebx
+mov    %eax,-0x58(%ebp)
+mov    -0x58(%ebp),%ebx
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,0x2(%ebx)
+mov    -0x58(%ebp),%ebx
+mov    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,(%ebx)
+mov    -0x58(%ebp),%ebx
+mov    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,0x1(%ebx)
+mov    -0x44(%ebp),%eax
+mov    -0x58(%ebp),%edx
+add    $0x3,%edx
+movl   $0x10,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
+mov    -0x58(%ebp),%ebx
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %al,0x2(%ebx)
-mov    -0x48(%ebp),%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,(%ebx)
-mov    -0x48(%ebp),%ebx
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,0x1(%ebx)
-mov    -0x34(%ebp),%edx
-mov    -0x48(%ebp),%eax
-add    $0x3,%eax
-movl   $0x10,0x8(%esp)
+mov    %ax,0x14(%ebx)
+mov    -0x58(%ebp),%eax
+mov    %eax,%edx
+lea    -0x18(%ebp),%eax
+lea    -0x58(%ebp),%ecx
+mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <strncpy>
-mov    -0x48(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+call   <T> <_ZSt9make_pairIRhRP12stServerInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
+sub    $0x4,%esp
+lea    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %ax,0x14(%ebx)
-mov    -0x48(%ebp),%eax
-lea    0x2(%eax),%edx
-lea    -0x48(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP12stServerInfoEC1IRhRS2_EEOT_OT0_>
+call   <T> <_ZNSt4pairIKjP12stServerInfoEC1IhS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%ecx
-lea    -0x14(%ebp),%eax
-lea    -0x10(%ebp),%edx
+lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 mov    $0x1,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x266>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x278>
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
  stServerInfo *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_2c;
  char *local_28;
  string local_20 [7];
  allocator local_19;
  pair local_18 [4];
  pair<unsigned_int_const,stServerInfo*> local_14 [8];
  
  if (*param_1 != '#') {
    if (param_2 < 6) {
      iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_2c,2);
      if (iVar2 == 2) {
        switch(param_2) {
        case 0:
          iVar2 = atoi(local_28);
          this[4] = SUB41(iVar2,0);
          break;
        case 1:
          iVar2 = atoi(local_28);
          *(short *)(this + 6) = (short)iVar2;
          break;
        case 2:
          iVar2 = atoi(local_28);
          this[10] = SUB41(iVar2,0);
          break;
        case 3:
          iVar2 = atoi(local_28);
          *(short *)(this + 8) = (short)iVar2;
          break;
        case 4:
          std::allocator<char>::allocator();
                    /* try { // try from 0805e821 to 0805e825 has its CatchHandler @ 0805e85f */
          std::string::string(local_20,local_28,&local_19);
                    /* try { // try from 0805e836 to 0805e83a has its CatchHandler @ 0805e83d */
          std::string::operator=((string *)(this + 0xc),local_20);
                    /* try { // try from 0805e858 to 0805e85c has its CatchHandler @ 0805e85f */
          std::string::~string(local_20);
          std::allocator<char>::~allocator((allocator<char> *)&local_19);
          break;
        case 5:
          iVar2 = atoi(local_28);
          *(short *)(this + 0x10) = (short)iVar2;
          break;
        default:
          return 0;
        }
        return 1;
      }
    }
    else {
      iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_48,6);
      if (iVar2 == 6) {
        psVar3 = operator_new(0x16);
        local_4c = psVar3;
        iVar2 = atoi(local_44);
        psVar1 = local_4c;
        psVar3[2] = SUB41(iVar2,0);
        iVar2 = atoi(local_40);
        psVar3 = local_4c;
        *psVar1 = SUB41(iVar2,0);
        iVar2 = atoi(local_3c);
        psVar3[1] = SUB41(iVar2,0);
        strncpy((char *)(local_4c + 3),local_38,0x10);
        psVar1 = local_4c;
        iVar2 = atoi(local_34);
        *(short *)(psVar1 + 0x14) = (short)iVar2;
        std::pair<unsigned_int_const,stServerInfo*>::pair<unsigned_char&,stServerInfo*&>
                  (local_14,(uchar *)(local_4c + 2),&local_4c);
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

定义于 [source/DNFServer/GameServer/Guild/DNFAppConfig.cpp](source/DNFServer/GameServer/Guild/DNFAppConfig.cpp)（约第 77 行）：

```cpp
int CAppConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    if (idx < 6)
    {
        char* tokens[3];
        int n = DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 2);
        if (n == 2)
        {
            switch (idx)
            {
            case 0:
                m_frameCount = (unsigned char)atoi(tokens[1]);
                break;
            case 1:
                *(short*)((char*)this + 6) = (short)atoi(tokens[1]);
                break;
            case 2:
                *(char*)((char*)this + 10) = (char)atoi(tokens[1]);
                break;
            case 3:
                *(short*)((char*)this + 8) = (short)atoi(tokens[1]);
                break;
            case 4:
                m_name = std::string(tokens[1]);
                break;
            case 5:
                *(short*)((char*)this + 0x10) = (short)atoi(tokens[1]);
                break;
            default:
                return 0;
            }
            return 1;
        }
    }
    else
    {
        char* tokens[7];
        int n = DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 6);
        if (n == 6)
        {
            stServerInfo* si = (stServerInfo*)operator new(0x16);
            si->m_field2 = (unsigned char)atoi(tokens[1]);
            si->m_group = (unsigned char)atoi(tokens[2]);
            si->m_field1 = (unsigned char)atoi(tokens[3]);
            strncpy(si->m_name, tokens[4], 0x10);
            si->m_port = (unsigned short)atoi(tokens[5]);
            m_serverInfo.insert(std::make_pair(si->m_group, si));
            return 1;
        }
    }
    return 0;
}
```
