# InsertDungeonKey

`_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey`

`CDungeonDataManager::InsertDungeonKey(DungeonKey&)`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x084856ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084856ac  _ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey
#           CDungeonDataManager::InsertDungeonKey(DungeonKey&)
# range [0x084856ac, 0x08485809]
084856ac +0x000:  push   %ebp
084856ad +0x001:  mov    %esp,%ebp
084856af +0x003:  push   %esi
084856b0 +0x004:  push   %ebx
084856b1 +0x005:  sub    $0x1f0,%esp
084856b7 +0x00b:  mov    0x8(%ebp),%edx
084856ba +0x00e:  lea    -0x1e0(%ebp),%eax
084856c0 +0x014:  mov    0xc(%ebp),%ecx
084856c3 +0x017:  mov    %ecx,0x8(%esp)
084856c7 +0x01b:  mov    %edx,0x4(%esp)
084856cb +0x01f:  mov    %eax,(%esp)
084856ce +0x022:  call   08487986 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13c0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13c0
084856d3 +0x027:  sub    $0x4,%esp
084856d6 +0x02a:  mov    0x8(%ebp),%edx
084856d9 +0x02d:  lea    -0x1dc(%ebp),%eax
084856df +0x033:  mov    %edx,0x4(%esp)
084856e3 +0x037:  mov    %eax,(%esp)
084856e6 +0x03a:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
084856eb +0x03f:  sub    $0x4,%esp
084856ee +0x042:  lea    -0x1dc(%ebp),%eax
084856f4 +0x048:  mov    %eax,0x4(%esp)
084856f8 +0x04c:  lea    -0x1e0(%ebp),%eax
084856fe +0x052:  mov    %eax,(%esp)
08485701 +0x055:  call   084879d8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1412>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1412
08485706 +0x05a:  test   %al,%al
08485708 +0x05c:  je     08485714 <+0x68>
0848570a +0x05e:  mov    $0x0,%eax
0848570f +0x063:  jmp    084857ff <+0x153>
08485714 +0x068:  lea    -0x98(%ebp),%eax
0848571a +0x06e:  mov    %eax,(%esp)
0848571d +0x071:  call   08486ae6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x520>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x520
08485722 +0x076:  lea    -0x134(%ebp),%eax
08485728 +0x07c:  lea    -0x98(%ebp),%edx
0848572e +0x082:  mov    %edx,0x8(%esp)
08485732 +0x086:  mov    0xc(%ebp),%edx
08485735 +0x089:  mov    %edx,0x4(%esp)
08485739 +0x08d:  mov    %eax,(%esp)
0848573c +0x090:  call   084879ec <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1426>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1426
08485741 +0x095:  sub    $0x4,%esp
08485744 +0x098:  lea    -0x134(%ebp),%eax
0848574a +0x09e:  mov    %eax,0x4(%esp)
0848574e +0x0a2:  lea    -0x1d0(%ebp),%eax
08485754 +0x0a8:  mov    %eax,(%esp)
08485757 +0x0ab:  call   08487b66 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x15a0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x15a0
0848575c +0x0b0:  mov    0x8(%ebp),%edx
0848575f +0x0b3:  lea    -0x1d8(%ebp),%eax
08485765 +0x0b9:  lea    -0x1d0(%ebp),%ecx
0848576b +0x0bf:  mov    %ecx,0x8(%esp)
0848576f +0x0c3:  mov    %edx,0x4(%esp)
08485773 +0x0c7:  mov    %eax,(%esp)
08485776 +0x0ca:  call   08487bda <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1614>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1614
0848577b +0x0cf:  sub    $0x4,%esp
0848577e +0x0d2:  lea    -0x1d0(%ebp),%eax
08485784 +0x0d8:  mov    %eax,(%esp)
08485787 +0x0db:  call   08486e0a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x844>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x844
0848578c +0x0e0:  jmp    084857be <+0x112>
0848578e +0x0e2:  mov    %edx,%ebx
08485790 +0x0e4:  mov    %eax,%esi
08485792 +0x0e6:  lea    -0x1d0(%ebp),%eax
08485798 +0x0ec:  mov    %eax,(%esp)
0848579b +0x0ef:  call   08486e0a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x844>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x844
084857a0 +0x0f4:  mov    %esi,%eax
084857a2 +0x0f6:  mov    %ebx,%edx
084857a4 +0x0f8:  jmp    084857a6 <+0xfa>
084857a6 +0x0fa:  mov    %edx,%ebx
084857a8 +0x0fc:  mov    %eax,%esi
084857aa +0x0fe:  lea    -0x134(%ebp),%eax
084857b0 +0x104:  mov    %eax,(%esp)
084857b3 +0x107:  call   08486dc4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x7fe>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x7fe
084857b8 +0x10c:  mov    %esi,%eax
084857ba +0x10e:  mov    %ebx,%edx
084857bc +0x110:  jmp    084857ce <+0x122>
084857be +0x112:  lea    -0x134(%ebp),%eax
084857c4 +0x118:  mov    %eax,(%esp)
084857c7 +0x11b:  call   08486dc4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x7fe>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x7fe
084857cc +0x120:  jmp    084857ec <+0x140>
084857ce +0x122:  mov    %edx,%ebx
084857d0 +0x124:  mov    %eax,%esi
084857d2 +0x126:  lea    -0x98(%ebp),%eax
084857d8 +0x12c:  mov    %eax,(%esp)
084857db +0x12f:  call   08486d3c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x776>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x776
084857e0 +0x134:  mov    %esi,%eax
084857e2 +0x136:  mov    %ebx,%edx
084857e4 +0x138:  mov    %eax,(%esp)
084857e7 +0x13b:  call   08ae3750 <_Unwind_Resume>
084857ec +0x140:  lea    -0x98(%ebp),%eax
084857f2 +0x146:  mov    %eax,(%esp)
084857f5 +0x149:  call   08486d3c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x776>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x776
084857fa +0x14e:  mov    $0x1,%eax
084857ff +0x153:  lea    -0x8(%ebp),%esp
08485802 +0x156:  add    $0x0,%esp
08485805 +0x159:  pop    %ebx
08485806 +0x15a:  pop    %esi
08485807 +0x15b:  pop    %ebp
08485808 +0x15c:  ret
08485809 +0x15d:  nop
```

## 反编译 C

```c
// CDungeonDataManager::InsertDungeonKey @ 0x84856ac

/* CDungeonDataManager::InsertDungeonKey(DungeonKey&) */

bool __thiscall CDungeonDataManager::InsertDungeonKey(CDungeonDataManager *this,DungeonKey *param_1)

{
  char cVar1;
  DungeonKey local_1e4 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1e0 [4];
  pair local_1dc [8];
  pair<DungeonKey_const,CDungeonNode> local_1d4 [156];
  DungeonKey local_138 [156];
  CDungeonNode local_9c [144];
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::find(local_1e4);
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::end(local_1e0);
  cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                    ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_1e4,
                     (_Rb_tree_iterator *)local_1e0);
  if (cVar1 == '\0') {
    CDungeonNode::CDungeonNode(local_9c);
                    /* try { // try from 0848573c to 08485740 has its CatchHandler @ 084857ce */
    std::make_pair<DungeonKey&,CDungeonNode>(local_138,(CDungeonNode *)param_1);
                    /* try { // try from 08485757 to 0848575b has its CatchHandler @ 084857a6 */
    std::pair<DungeonKey_const,CDungeonNode>::pair<DungeonKey,CDungeonNode>(local_1d4,local_138);
                    /* try { // try from 08485776 to 0848577a has its CatchHandler @ 0848578e */
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::insert(local_1dc);
                    /* try { // try from 08485787 to 0848578b has its CatchHandler @ 084857a6 */
    std::pair<DungeonKey_const,CDungeonNode>::~pair(local_1d4);
                    /* try { // try from 084857c7 to 084857cb has its CatchHandler @ 084857ce */
    std::pair<DungeonKey,CDungeonNode>::~pair((pair<DungeonKey,CDungeonNode> *)local_138);
    CDungeonNode::~CDungeonNode(local_9c);
  }
  return cVar1 == '\0';
}
```
