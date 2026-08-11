# _ZN12CApplication15TranslateSignalEv

`CApplication::TranslateSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8050538` | `0xc9` | `0x804dbc2` | `0xc7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfig11Clear_TableEv>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0xd(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/kill_user_config.tbl",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x71>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x7e>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x99>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CKillUSRConfig7GetInfoEv>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5emptyEv>
-test   %al,%al
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::TranslateSignal() */

void __thiscall CApplication::_ZN12CApplication15TranslateSignalEv(CApplication *this)

{
  code *pcVar1;
  string local_18 [7];
  allocator local_11;
  undefined4 local_10;
  
  CKillUSRConfig::Clear_Table(*(CKillUSRConfig **)(this + 0x18));
  pcVar1 = *(code **)(**(int **)(this + 0x18) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0805057b to 0805057f has its CatchHandler @ 080505b6 */
  std::string::string(local_18,"./script/kill_user_config.tbl",&local_11);
                    /* try { // try from 08050590 to 08050591 has its CatchHandler @ 08050594 */
  (*pcVar1)(*(undefined4 *)(this + 0x18),local_18);
                    /* try { // try from 080505af to 080505b3 has its CatchHandler @ 080505b6 */
  std::string::~string(local_18);
  std::allocator<char>::~allocator((allocator<char> *)&local_11);
  local_10 = CKillUSRConfig::GetInfo(*(CKillUSRConfig **)(this + 0x18));
  std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::empty();
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 407 行）：

```cpp
void CApplication::TranslateSignal()
{
    m_killUsrConfig->Clear_Table();
    m_killUsrConfig->Load_Table("./script/kill_user_config.tbl");
    std::vector<ST_KillUSRConfig*>* v = m_killUsrConfig->GetInfo();
    register bool b = v->empty();
    (void)b;
}
```
