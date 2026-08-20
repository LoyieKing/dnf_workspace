# InsertMonsterKey

`_ZN12CDungeonNode16InsertMonsterKeyEi`

`CDungeonNode::InsertMonsterKey(int)`

| 类 | 地址 |
|---|---|
| `CDungeonNode` | `0x084852de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084852de  _ZN12CDungeonNode16InsertMonsterKeyEi
#           CDungeonNode::InsertMonsterKey(int)
# range [0x084852de, 0x08485403]
084852de +0x000:  push   %ebp
084852df +0x001:  mov    %esp,%ebp
084852e1 +0x003:  push   %esi
084852e2 +0x004:  push   %ebx
084852e3 +0x005:  sub    $0x50,%esp
084852e6 +0x008:  mov    0x8(%ebp),%edx
084852e9 +0x00b:  lea    -0x44(%ebp),%eax
084852ec +0x00e:  mov    %edx,0x4(%esp)
084852f0 +0x012:  mov    %eax,(%esp)
084852f3 +0x015:  call   084876b8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10f2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10f2
084852f8 +0x01a:  sub    $0x4,%esp
084852fb +0x01d:  mov    0x8(%ebp),%edx
084852fe +0x020:  lea    -0x40(%ebp),%eax
08485301 +0x023:  lea    0xc(%ebp),%ecx
08485304 +0x026:  mov    %ecx,0x8(%esp)
08485308 +0x02a:  mov    %edx,0x4(%esp)
0848530c +0x02e:  mov    %eax,(%esp)
0848530f +0x031:  call   0848768c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10c6>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10c6
08485314 +0x036:  sub    $0x4,%esp
08485317 +0x039:  lea    -0x44(%ebp),%eax
0848531a +0x03c:  mov    %eax,0x4(%esp)
0848531e +0x040:  lea    -0x40(%ebp),%eax
08485321 +0x043:  mov    %eax,(%esp)
08485324 +0x046:  call   084876de <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1118>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1118
08485329 +0x04b:  test   %al,%al
0848532b +0x04d:  je     08485337 <+0x59>
0848532d +0x04f:  mov    $0x0,%eax
08485332 +0x054:  jmp    084853f9 <+0x11b>
08485337 +0x059:  lea    -0x14(%ebp),%eax
0848533a +0x05c:  mov    %eax,(%esp)
0848533d +0x05f:  call   08486978 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x3b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x3b2
08485342 +0x064:  lea    -0x24(%ebp),%eax
08485345 +0x067:  lea    -0x14(%ebp),%edx
08485348 +0x06a:  mov    %edx,0x8(%esp)
0848534c +0x06e:  lea    0xc(%ebp),%edx
0848534f +0x071:  mov    %edx,0x4(%esp)
08485353 +0x075:  mov    %eax,(%esp)
08485356 +0x078:  call   084876f2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x112c>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x112c
0848535b +0x07d:  sub    $0x4,%esp
0848535e +0x080:  lea    -0x24(%ebp),%eax
08485361 +0x083:  mov    %eax,0x4(%esp)
08485365 +0x087:  lea    -0x34(%ebp),%eax
08485368 +0x08a:  mov    %eax,(%esp)
0848536b +0x08d:  call   08487736 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1170>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1170
08485370 +0x092:  mov    0x8(%ebp),%edx
08485373 +0x095:  lea    -0x3c(%ebp),%eax
08485376 +0x098:  lea    -0x34(%ebp),%ecx
08485379 +0x09b:  mov    %ecx,0x8(%esp)
0848537d +0x09f:  mov    %edx,0x4(%esp)
08485381 +0x0a3:  mov    %eax,(%esp)
08485384 +0x0a6:  call   08487772 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x11ac>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x11ac
08485389 +0x0ab:  sub    $0x4,%esp
0848538c +0x0ae:  lea    -0x34(%ebp),%eax
0848538f +0x0b1:  mov    %eax,(%esp)
08485392 +0x0b4:  call   08486cbe <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6f8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6f8
08485397 +0x0b9:  lea    -0x24(%ebp),%eax
0848539a +0x0bc:  mov    %eax,(%esp)
0848539d +0x0bf:  call   08486ca8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6e2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6e2
084853a2 +0x0c4:  lea    -0x14(%ebp),%eax
084853a5 +0x0c7:  mov    %eax,(%esp)
084853a8 +0x0ca:  call   084869d0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x40a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x40a
084853ad +0x0cf:  mov    $0x1,%eax
084853b2 +0x0d4:  jmp    084853f9 <+0x11b>
084853b4 +0x0d6:  mov    %edx,%ebx
084853b6 +0x0d8:  mov    %eax,%esi
084853b8 +0x0da:  lea    -0x34(%ebp),%eax
084853bb +0x0dd:  mov    %eax,(%esp)
084853be +0x0e0:  call   08486cbe <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6f8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6f8
084853c3 +0x0e5:  mov    %esi,%eax
084853c5 +0x0e7:  mov    %ebx,%edx
084853c7 +0x0e9:  jmp    084853c9 <+0xeb>
084853c9 +0x0eb:  mov    %edx,%ebx
084853cb +0x0ed:  mov    %eax,%esi
084853cd +0x0ef:  lea    -0x24(%ebp),%eax
084853d0 +0x0f2:  mov    %eax,(%esp)
084853d3 +0x0f5:  call   08486ca8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6e2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6e2
084853d8 +0x0fa:  mov    %esi,%eax
084853da +0x0fc:  mov    %ebx,%edx
084853dc +0x0fe:  jmp    084853de <+0x100>
084853de +0x100:  mov    %edx,%ebx
084853e0 +0x102:  mov    %eax,%esi
084853e2 +0x104:  lea    -0x14(%ebp),%eax
084853e5 +0x107:  mov    %eax,(%esp)
084853e8 +0x10a:  call   084869d0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x40a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x40a
084853ed +0x10f:  mov    %esi,%eax
084853ef +0x111:  mov    %ebx,%edx
084853f1 +0x113:  mov    %eax,(%esp)
084853f4 +0x116:  call   08ae3750 <_Unwind_Resume>
084853f9 +0x11b:  lea    -0x8(%ebp),%esp
084853fc +0x11e:  add    $0x0,%esp
084853ff +0x121:  pop    %ebx
08485400 +0x122:  pop    %esi
08485401 +0x123:  pop    %ebp
08485402 +0x124:  ret
08485403 +0x125:  nop
```

## 反编译 C

```c
// CDungeonNode::InsertMonsterKey @ 0x84852de

/* CDungeonNode::InsertMonsterKey(int) */

bool CDungeonNode::InsertMonsterKey(int param_1)

{
  char cVar1;
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_48 [4];
  _Rb_tree_iterator<std::pair<int_const,Monster>> local_44 [4];
  pair local_40 [8];
  pair<int_const,Monster> local_38 [16];
  pair<int,Monster> local_28 [16];
  Monster local_18 [12];
  
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::end(local_48);
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::find
            ((int *)local_44);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator!=
                    (local_44,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    Monster::Monster(local_18);
                    /* try { // try from 08485356 to 0848535a has its CatchHandler @ 084853de */
    std::make_pair<int&,Monster>((int *)local_28,(Monster *)&stack0x00000008);
                    /* try { // try from 0848536b to 0848536f has its CatchHandler @ 084853c9 */
    std::pair<int_const,Monster>::pair<int,Monster>(local_38,local_28);
                    /* try { // try from 08485384 to 08485388 has its CatchHandler @ 084853b4 */
    std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::insert
              (local_40);
    std::pair<int_const,Monster>::~pair(local_38);
    std::pair<int,Monster>::~pair(local_28);
    Monster::~Monster(local_18);
  }
  return cVar1 == '\0';
}
```
