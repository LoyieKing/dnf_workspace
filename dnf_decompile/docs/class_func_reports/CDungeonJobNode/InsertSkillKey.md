# InsertSkillKey

`_ZN15CDungeonJobNode14InsertSkillKeyEi`

`CDungeonJobNode::InsertSkillKey(int)`

| 类 | 地址 |
|---|---|
| `CDungeonJobNode` | `0x08484a86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08484a86  _ZN15CDungeonJobNode14InsertSkillKeyEi
#           CDungeonJobNode::InsertSkillKey(int)
# range [0x08484a86, 0x08484bab]
08484a86 +0x000:  push   %ebp
08484a87 +0x001:  mov    %esp,%ebp
08484a89 +0x003:  push   %esi
08484a8a +0x004:  push   %ebx
08484a8b +0x005:  sub    $0x60,%esp
08484a8e +0x008:  mov    0x8(%ebp),%edx
08484a91 +0x00b:  lea    -0x50(%ebp),%eax
08484a94 +0x00e:  mov    %edx,0x4(%esp)
08484a98 +0x012:  mov    %eax,(%esp)
08484a9b +0x015:  call   084870b6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xaf0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xaf0
08484aa0 +0x01a:  sub    $0x4,%esp
08484aa3 +0x01d:  mov    0x8(%ebp),%edx
08484aa6 +0x020:  lea    -0x4c(%ebp),%eax
08484aa9 +0x023:  lea    0xc(%ebp),%ecx
08484aac +0x026:  mov    %ecx,0x8(%esp)
08484ab0 +0x02a:  mov    %edx,0x4(%esp)
08484ab4 +0x02e:  mov    %eax,(%esp)
08484ab7 +0x031:  call   0848708a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xac4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xac4
08484abc +0x036:  sub    $0x4,%esp
08484abf +0x039:  lea    -0x50(%ebp),%eax
08484ac2 +0x03c:  mov    %eax,0x4(%esp)
08484ac6 +0x040:  lea    -0x4c(%ebp),%eax
08484ac9 +0x043:  mov    %eax,(%esp)
08484acc +0x046:  call   084870dc <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xb16>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xb16
08484ad1 +0x04b:  test   %al,%al
08484ad3 +0x04d:  je     08484adf <+0x59>
08484ad5 +0x04f:  mov    $0x0,%eax
08484ada +0x054:  jmp    08484ba1 <+0x11b>
08484adf +0x059:  lea    -0x18(%ebp),%eax
08484ae2 +0x05c:  mov    %eax,(%esp)
08484ae5 +0x05f:  call   084868e4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x31e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x31e
08484aea +0x064:  lea    -0x2c(%ebp),%eax
08484aed +0x067:  lea    -0x18(%ebp),%edx
08484af0 +0x06a:  mov    %edx,0x8(%esp)
08484af4 +0x06e:  lea    0xc(%ebp),%edx
08484af7 +0x071:  mov    %edx,0x4(%esp)
08484afb +0x075:  mov    %eax,(%esp)
08484afe +0x078:  call   084870f0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xb2a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xb2a
08484b03 +0x07d:  sub    $0x4,%esp
08484b06 +0x080:  lea    -0x2c(%ebp),%eax
08484b09 +0x083:  mov    %eax,0x4(%esp)
08484b0d +0x087:  lea    -0x40(%ebp),%eax
08484b10 +0x08a:  mov    %eax,(%esp)
08484b13 +0x08d:  call   08487134 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xb6e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xb6e
08484b18 +0x092:  mov    0x8(%ebp),%edx
08484b1b +0x095:  lea    -0x48(%ebp),%eax
08484b1e +0x098:  lea    -0x40(%ebp),%ecx
08484b21 +0x09b:  mov    %ecx,0x8(%esp)
08484b25 +0x09f:  mov    %edx,0x4(%esp)
08484b29 +0x0a3:  mov    %eax,(%esp)
08484b2c +0x0a6:  call   08487176 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xbb0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xbb0
08484b31 +0x0ab:  sub    $0x4,%esp
08484b34 +0x0ae:  lea    -0x40(%ebp),%eax
08484b37 +0x0b1:  mov    %eax,(%esp)
08484b3a +0x0b4:  call   08486c04 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x63e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x63e
08484b3f +0x0b9:  lea    -0x2c(%ebp),%eax
08484b42 +0x0bc:  mov    %eax,(%esp)
08484b45 +0x0bf:  call   08486bee <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x628>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x628
08484b4a +0x0c4:  lea    -0x18(%ebp),%eax
08484b4d +0x0c7:  mov    %eax,(%esp)
08484b50 +0x0ca:  call   08486950 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x38a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x38a
08484b55 +0x0cf:  mov    $0x1,%eax
08484b5a +0x0d4:  jmp    08484ba1 <+0x11b>
08484b5c +0x0d6:  mov    %edx,%ebx
08484b5e +0x0d8:  mov    %eax,%esi
08484b60 +0x0da:  lea    -0x40(%ebp),%eax
08484b63 +0x0dd:  mov    %eax,(%esp)
08484b66 +0x0e0:  call   08486c04 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x63e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x63e
08484b6b +0x0e5:  mov    %esi,%eax
08484b6d +0x0e7:  mov    %ebx,%edx
08484b6f +0x0e9:  jmp    08484b71 <+0xeb>
08484b71 +0x0eb:  mov    %edx,%ebx
08484b73 +0x0ed:  mov    %eax,%esi
08484b75 +0x0ef:  lea    -0x2c(%ebp),%eax
08484b78 +0x0f2:  mov    %eax,(%esp)
08484b7b +0x0f5:  call   08486bee <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x628>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x628
08484b80 +0x0fa:  mov    %esi,%eax
08484b82 +0x0fc:  mov    %ebx,%edx
08484b84 +0x0fe:  jmp    08484b86 <+0x100>
08484b86 +0x100:  mov    %edx,%ebx
08484b88 +0x102:  mov    %eax,%esi
08484b8a +0x104:  lea    -0x18(%ebp),%eax
08484b8d +0x107:  mov    %eax,(%esp)
08484b90 +0x10a:  call   08486950 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x38a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x38a
08484b95 +0x10f:  mov    %esi,%eax
08484b97 +0x111:  mov    %ebx,%edx
08484b99 +0x113:  mov    %eax,(%esp)
08484b9c +0x116:  call   08ae3750 <_Unwind_Resume>
08484ba1 +0x11b:  lea    -0x8(%ebp),%esp
08484ba4 +0x11e:  add    $0x0,%esp
08484ba7 +0x121:  pop    %ebx
08484ba8 +0x122:  pop    %esi
08484ba9 +0x123:  pop    %ebp
08484baa +0x124:  ret
08484bab +0x125:  nop
```

## 反编译 C

```c
// CDungeonJobNode::InsertSkillKey @ 0x8484a86

/* CDungeonJobNode::InsertSkillKey(int) */

bool CDungeonJobNode::InsertSkillKey(int param_1)

{
  char cVar1;
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_54 [4];
  _Rb_tree_iterator<std::pair<int_const,Skill>> local_50 [4];
  pair local_4c [8];
  pair<int_const,Skill> local_44 [20];
  pair<int,Skill> local_30 [20];
  Skill local_1c [16];
  
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::end(local_54);
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::find
            ((int *)local_50);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator!=
                    (local_50,(_Rb_tree_iterator *)local_54);
  if (cVar1 == '\0') {
    Skill::Skill(local_1c);
                    /* try { // try from 08484afe to 08484b02 has its CatchHandler @ 08484b86 */
    std::make_pair<int&,Skill>((int *)local_30,(Skill *)&stack0x00000008);
                    /* try { // try from 08484b13 to 08484b17 has its CatchHandler @ 08484b71 */
    std::pair<int_const,Skill>::pair<int,Skill>(local_44,local_30);
                    /* try { // try from 08484b2c to 08484b30 has its CatchHandler @ 08484b5c */
    std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::insert(local_4c);
    std::pair<int_const,Skill>::~pair(local_44);
    std::pair<int,Skill>::~pair(local_30);
    Skill::~Skill(local_1c);
  }
  return cVar1 == '\0';
}
```
