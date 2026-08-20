# InsertSkillKey

`_ZN12CDungeonNode14InsertSkillKeyEiiii`

`CDungeonNode::InsertSkillKey(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CDungeonNode` | `0x08485404` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485404  _ZN12CDungeonNode14InsertSkillKeyEiiii
#           CDungeonNode::InsertSkillKey(int, int, int, int)
# range [0x08485404, 0x08485563]
08485404 +0x000:  push   %ebp
08485405 +0x001:  mov    %esp,%ebp
08485407 +0x003:  push   %esi
08485408 +0x004:  push   %ebx
08485409 +0x005:  add    $0xffffff80,%esp
0848540c +0x008:  mov    0x8(%ebp),%eax
0848540f +0x00b:  lea    0x18(%eax),%ecx
08485412 +0x00e:  lea    -0x54(%ebp),%eax
08485415 +0x011:  lea    0x10(%ebp),%edx
08485418 +0x014:  mov    %edx,0x8(%esp)
0848541c +0x018:  mov    %ecx,0x4(%esp)
08485420 +0x01c:  mov    %eax,(%esp)
08485423 +0x01f:  call   0848779e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x11d8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x11d8
08485428 +0x024:  sub    $0x4,%esp
0848542b +0x027:  mov    0x8(%ebp),%eax
0848542e +0x02a:  lea    0x18(%eax),%edx
08485431 +0x02d:  lea    -0x50(%ebp),%eax
08485434 +0x030:  mov    %edx,0x4(%esp)
08485438 +0x034:  mov    %eax,(%esp)
0848543b +0x037:  call   084877ca <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1204>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1204
08485440 +0x03c:  sub    $0x4,%esp
08485443 +0x03f:  lea    -0x50(%ebp),%eax
08485446 +0x042:  mov    %eax,0x4(%esp)
0848544a +0x046:  lea    -0x54(%ebp),%eax
0848544d +0x049:  mov    %eax,(%esp)
08485450 +0x04c:  call   084877f0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x122a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x122a
08485455 +0x051:  test   %al,%al
08485457 +0x053:  je     08485481 <+0x7d>
08485459 +0x055:  lea    -0x54(%ebp),%eax
0848545c +0x058:  mov    %eax,(%esp)
0848545f +0x05b:  call   08487804 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x123e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x123e
08485464 +0x060:  add    $0x4,%eax
08485467 +0x063:  mov    %eax,-0xc(%ebp)
0848546a +0x066:  mov    0xc(%ebp),%eax
0848546d +0x069:  mov    %eax,0x4(%esp)
08485471 +0x06d:  mov    -0xc(%ebp),%eax
08485474 +0x070:  mov    %eax,(%esp)
08485477 +0x073:  call   08484a86 <_ZN15CDungeonJobNode14InsertSkillKeyEi>  ; CDungeonJobNode::InsertSkillKey(int)
0848547c +0x078:  jmp    08485555 <+0x151>
08485481 +0x07d:  lea    -0x6c(%ebp),%eax
08485484 +0x080:  mov    %eax,(%esp)
08485487 +0x083:  call   08486ce8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x722>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x722
0848548c +0x088:  mov    0xc(%ebp),%eax
0848548f +0x08b:  mov    %eax,0x4(%esp)
08485493 +0x08f:  lea    -0x6c(%ebp),%eax
08485496 +0x092:  mov    %eax,(%esp)
08485499 +0x095:  call   08484a86 <_ZN15CDungeonJobNode14InsertSkillKeyEi>  ; CDungeonJobNode::InsertSkillKey(int)
0848549e +0x09a:  lea    -0x28(%ebp),%eax
084854a1 +0x09d:  lea    -0x6c(%ebp),%edx
084854a4 +0x0a0:  mov    %edx,0x8(%esp)
084854a8 +0x0a4:  lea    0x10(%ebp),%edx
084854ab +0x0a7:  mov    %edx,0x4(%esp)
084854af +0x0ab:  mov    %eax,(%esp)
084854b2 +0x0ae:  call   0848788b <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x12c5>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x12c5
084854b7 +0x0b3:  sub    $0x4,%esp
084854ba +0x0b6:  lea    -0x28(%ebp),%eax
084854bd +0x0b9:  mov    %eax,0x4(%esp)
084854c1 +0x0bd:  lea    -0x44(%ebp),%eax
084854c4 +0x0c0:  mov    %eax,(%esp)
084854c7 +0x0c3:  call   084878ea <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1324>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1324
084854cc +0x0c8:  mov    0x8(%ebp),%eax
084854cf +0x0cb:  lea    0x18(%eax),%ecx
084854d2 +0x0ce:  lea    -0x4c(%ebp),%eax
084854d5 +0x0d1:  lea    -0x44(%ebp),%edx
084854d8 +0x0d4:  mov    %edx,0x8(%esp)
084854dc +0x0d8:  mov    %ecx,0x4(%esp)
084854e0 +0x0dc:  mov    %eax,(%esp)
084854e3 +0x0df:  call   08487924 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x135e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x135e
084854e8 +0x0e4:  sub    $0x4,%esp
084854eb +0x0e7:  lea    -0x44(%ebp),%eax
084854ee +0x0ea:  mov    %eax,(%esp)
084854f1 +0x0ed:  call   08486d26 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x760>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x760
084854f6 +0x0f2:  jmp    08485522 <+0x11e>
084854f8 +0x0f4:  mov    %edx,%ebx
084854fa +0x0f6:  mov    %eax,%esi
084854fc +0x0f8:  lea    -0x44(%ebp),%eax
084854ff +0x0fb:  mov    %eax,(%esp)
08485502 +0x0fe:  call   08486d26 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x760>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x760
08485507 +0x103:  mov    %esi,%eax
08485509 +0x105:  mov    %ebx,%edx
0848550b +0x107:  jmp    0848550d <+0x109>
0848550d +0x109:  mov    %edx,%ebx
0848550f +0x10b:  mov    %eax,%esi
08485511 +0x10d:  lea    -0x28(%ebp),%eax
08485514 +0x110:  mov    %eax,(%esp)
08485517 +0x113:  call   08486d10 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x74a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x74a
0848551c +0x118:  mov    %esi,%eax
0848551e +0x11a:  mov    %ebx,%edx
08485520 +0x11c:  jmp    0848552f <+0x12b>
08485522 +0x11e:  lea    -0x28(%ebp),%eax
08485525 +0x121:  mov    %eax,(%esp)
08485528 +0x124:  call   08486d10 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x74a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x74a
0848552d +0x129:  jmp    0848554a <+0x146>
0848552f +0x12b:  mov    %edx,%ebx
08485531 +0x12d:  mov    %eax,%esi
08485533 +0x12f:  lea    -0x6c(%ebp),%eax
08485536 +0x132:  mov    %eax,(%esp)
08485539 +0x135:  call   08486cfc <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x736>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x736
0848553e +0x13a:  mov    %esi,%eax
08485540 +0x13c:  mov    %ebx,%edx
08485542 +0x13e:  mov    %eax,(%esp)
08485545 +0x141:  call   08ae3750 <_Unwind_Resume>
0848554a +0x146:  lea    -0x6c(%ebp),%eax
0848554d +0x149:  mov    %eax,(%esp)
08485550 +0x14c:  call   08486cfc <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x736>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x736
08485555 +0x151:  mov    $0x1,%eax
0848555a +0x156:  lea    -0x8(%ebp),%esp
0848555d +0x159:  add    $0x0,%esp
08485560 +0x15c:  pop    %ebx
08485561 +0x15d:  pop    %esi
08485562 +0x15e:  pop    %ebp
08485563 +0x15f:  ret
```

## 反编译 C

```c
// CDungeonNode::InsertSkillKey @ 0x8485404

/* CDungeonNode::InsertSkillKey(int, int, int, int) */

undefined4 CDungeonNode::InsertSkillKey(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  CDungeonJobNode local_70 [24];
  _Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> local_58 [4];
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_54 [4];
  pair local_50 [8];
  pair<int_const,CDungeonJobNode> local_48 [28];
  pair<int,CDungeonJobNode> local_2c [28];
  int local_10;
  
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::find((int *)local_58);
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::end(local_54);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator!=
                    (local_58,(_Rb_tree_iterator *)local_54);
  if (cVar1 == '\0') {
    CDungeonJobNode::CDungeonJobNode(local_70);
                    /* try { // try from 08485499 to 084854b6 has its CatchHandler @ 0848552f */
    CDungeonJobNode::InsertSkillKey((int)local_70);
    std::make_pair<int&,CDungeonJobNode&>((int *)local_2c,(CDungeonJobNode *)&param_3);
                    /* try { // try from 084854c7 to 084854cb has its CatchHandler @ 0848550d */
    std::pair<int_const,CDungeonJobNode>::pair<int,CDungeonJobNode>(local_48,local_2c);
                    /* try { // try from 084854e3 to 084854e7 has its CatchHandler @ 084854f8 */
    std::
    map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>::
    insert(local_50);
                    /* try { // try from 084854f1 to 084854f5 has its CatchHandler @ 0848550d */
    std::pair<int_const,CDungeonJobNode>::~pair(local_48);
                    /* try { // try from 08485528 to 0848552c has its CatchHandler @ 0848552f */
    std::pair<int,CDungeonJobNode>::~pair(local_2c);
    CDungeonJobNode::~CDungeonJobNode(local_70);
  }
  else {
    local_10 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->(local_58);
    local_10 = local_10 + 4;
    CDungeonJobNode::InsertSkillKey(local_10);
  }
  return 1;
}
```
