# TutorialData

`_ZN12TutorialDataC1Ev`

`TutorialData::TutorialData()`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab7e4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab7e4c  _ZN12TutorialDataC1Ev
#           TutorialData::TutorialData()
# range [0x08ab7e4c, 0x08ab80ed]
08ab7e4c +0x000:  push   %ebp
08ab7e4d +0x001:  mov    %esp,%ebp
08ab7e4f +0x003:  push   %edi
08ab7e50 +0x004:  push   %esi
08ab7e51 +0x005:  push   %ebx
08ab7e52 +0x006:  sub    $0x2c,%esp
08ab7e55 +0x009:  mov    0x8(%ebp),%eax
08ab7e58 +0x00c:  add    $0x4,%eax
08ab7e5b +0x00f:  mov    %eax,(%esp)
08ab7e5e +0x012:  call   08ab98a0 <_GLOBAL__I__ZN12TutorialDataC2Ev+0xdb>  ; global constructors keyed to TutorialData::TutorialData()+0xdb
08ab7e63 +0x017:  mov    0x8(%ebp),%eax
08ab7e66 +0x01a:  add    $0x1c,%eax
08ab7e69 +0x01d:  mov    %eax,(%esp)
08ab7e6c +0x020:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
08ab7e71 +0x025:  mov    0x8(%ebp),%eax
08ab7e74 +0x028:  lea    0x34(%eax),%esi
08ab7e77 +0x02b:  mov    %esi,%edi
08ab7e79 +0x02d:  mov    $0x3,%ebx
08ab7e7e +0x032:  jmp    08ab7e8e <+0x42>
08ab7e80 +0x034:  mov    %edi,(%esp)
08ab7e83 +0x037:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
08ab7e88 +0x03c:  add    $0x18,%edi
08ab7e8b +0x03f:  sub    $0x1,%ebx
08ab7e8e +0x042:  cmp    $0xffffffff,%ebx
08ab7e91 +0x045:  setne  %al
08ab7e94 +0x048:  test   %al,%al
08ab7e96 +0x04a:  jne    08ab7e80 <+0x34>
08ab7e98 +0x04c:  jmp    08ab7ed3 <+0x87>
08ab7e9a +0x04e:  mov    %edx,%edi
08ab7e9c +0x050:  mov    %eax,-0x24(%ebp)
08ab7e9f +0x053:  test   %esi,%esi
08ab7ea1 +0x055:  je     08ab7ec9 <+0x7d>
08ab7ea3 +0x057:  mov    $0x3,%eax
08ab7ea8 +0x05c:  sub    %ebx,%eax
08ab7eaa +0x05e:  mov    %eax,%edx
08ab7eac +0x060:  mov    %edx,%eax
08ab7eae +0x062:  add    %eax,%eax
08ab7eb0 +0x064:  add    %edx,%eax
08ab7eb2 +0x066:  shl    $0x3,%eax
08ab7eb5 +0x069:  lea    (%esi,%eax,1),%ebx
08ab7eb8 +0x06c:  cmp    %esi,%ebx
08ab7eba +0x06e:  je     08ab7ec9 <+0x7d>
08ab7ebc +0x070:  sub    $0x18,%ebx
08ab7ebf +0x073:  mov    %ebx,(%esp)
08ab7ec2 +0x076:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab7ec7 +0x07b:  jmp    08ab7eb8 <+0x6c>
08ab7ec9 +0x07d:  mov    -0x24(%ebp),%eax
08ab7ecc +0x080:  mov    %edi,%edx
08ab7ece +0x082:  jmp    08ab80af <+0x263>
08ab7ed3 +0x087:  mov    0x8(%ebp),%eax
08ab7ed6 +0x08a:  lea    0x94(%eax),%esi
08ab7edc +0x090:  mov    %esi,%edi
08ab7ede +0x092:  mov    $0x3,%ebx
08ab7ee3 +0x097:  jmp    08ab7ef3 <+0xa7>
08ab7ee5 +0x099:  mov    %edi,(%esp)
08ab7ee8 +0x09c:  call   08ab991a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x155>  ; global constructors keyed to TutorialData::TutorialData()+0x155
08ab7eed +0x0a1:  add    $0x18,%edi
08ab7ef0 +0x0a4:  sub    $0x1,%ebx
08ab7ef3 +0x0a7:  cmp    $0xffffffff,%ebx
08ab7ef6 +0x0aa:  setne  %al
08ab7ef9 +0x0ad:  test   %al,%al
08ab7efb +0x0af:  jne    08ab7ee5 <+0x99>
08ab7efd +0x0b1:  jmp    08ab7f38 <+0xec>
08ab7eff +0x0b3:  mov    %edx,%edi
08ab7f01 +0x0b5:  mov    %eax,-0x20(%ebp)
08ab7f04 +0x0b8:  test   %esi,%esi
08ab7f06 +0x0ba:  je     08ab7f2e <+0xe2>
08ab7f08 +0x0bc:  mov    $0x3,%eax
08ab7f0d +0x0c1:  sub    %ebx,%eax
08ab7f0f +0x0c3:  mov    %eax,%edx
08ab7f11 +0x0c5:  mov    %edx,%eax
08ab7f13 +0x0c7:  add    %eax,%eax
08ab7f15 +0x0c9:  add    %edx,%eax
08ab7f17 +0x0cb:  shl    $0x3,%eax
08ab7f1a +0x0ce:  lea    (%esi,%eax,1),%ebx
08ab7f1d +0x0d1:  cmp    %esi,%ebx
08ab7f1f +0x0d3:  je     08ab7f2e <+0xe2>
08ab7f21 +0x0d5:  sub    $0x18,%ebx
08ab7f24 +0x0d8:  mov    %ebx,(%esp)
08ab7f27 +0x0db:  call   08ab97f6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x31>  ; global constructors keyed to TutorialData::TutorialData()+0x31
08ab7f2c +0x0e0:  jmp    08ab7f1d <+0xd1>
08ab7f2e +0x0e2:  mov    -0x20(%ebp),%eax
08ab7f31 +0x0e5:  mov    %edi,%edx
08ab7f33 +0x0e7:  jmp    08ab807d <+0x231>
08ab7f38 +0x0ec:  mov    0x8(%ebp),%eax
08ab7f3b +0x0ef:  lea    0xf4(%eax),%esi
08ab7f41 +0x0f5:  mov    %esi,%edi
08ab7f43 +0x0f7:  mov    $0x3,%ebx
08ab7f48 +0x0fc:  jmp    08ab7f58 <+0x10c>
08ab7f4a +0x0fe:  mov    %edi,(%esp)
08ab7f4d +0x101:  call   08ab9994 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1cf>  ; global constructors keyed to TutorialData::TutorialData()+0x1cf
08ab7f52 +0x106:  add    $0xc,%edi
08ab7f55 +0x109:  sub    $0x1,%ebx
08ab7f58 +0x10c:  cmp    $0xffffffff,%ebx
08ab7f5b +0x10f:  setne  %al
08ab7f5e +0x112:  test   %al,%al
08ab7f60 +0x114:  jne    08ab7f4a <+0xfe>
08ab7f62 +0x116:  jmp    08ab7f9d <+0x151>
08ab7f64 +0x118:  mov    %edx,%edi
08ab7f66 +0x11a:  mov    %eax,-0x1c(%ebp)
08ab7f69 +0x11d:  test   %esi,%esi
08ab7f6b +0x11f:  je     08ab7f93 <+0x147>
08ab7f6d +0x121:  mov    $0x3,%eax
08ab7f72 +0x126:  sub    %ebx,%eax
08ab7f74 +0x128:  mov    %eax,%edx
08ab7f76 +0x12a:  mov    %edx,%eax
08ab7f78 +0x12c:  add    %eax,%eax
08ab7f7a +0x12e:  add    %edx,%eax
08ab7f7c +0x130:  shl    $0x2,%eax
08ab7f7f +0x133:  lea    (%esi,%eax,1),%ebx
08ab7f82 +0x136:  cmp    %esi,%ebx
08ab7f84 +0x138:  je     08ab7f93 <+0x147>
08ab7f86 +0x13a:  sub    $0xc,%ebx
08ab7f89 +0x13d:  mov    %ebx,(%esp)
08ab7f8c +0x140:  call   08ab99a8 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1e3>  ; global constructors keyed to TutorialData::TutorialData()+0x1e3
08ab7f91 +0x145:  jmp    08ab7f82 <+0x136>
08ab7f93 +0x147:  mov    -0x1c(%ebp),%eax
08ab7f96 +0x14a:  mov    %edi,%edx
08ab7f98 +0x14c:  jmp    08ab8045 <+0x1f9>
08ab7f9d +0x151:  mov    0x8(%ebp),%eax
08ab7fa0 +0x154:  add    $0x124,%eax
08ab7fa5 +0x159:  mov    %eax,(%esp)
08ab7fa8 +0x15c:  call   08ab9a06 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x241>  ; global constructors keyed to TutorialData::TutorialData()+0x241
08ab7fad +0x161:  mov    0x8(%ebp),%eax
08ab7fb0 +0x164:  add    $0x13c,%eax
08ab7fb5 +0x169:  mov    %eax,(%esp)
08ab7fb8 +0x16c:  call   08ab9a80 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x2bb>  ; global constructors keyed to TutorialData::TutorialData()+0x2bb
08ab7fbd +0x171:  mov    0x8(%ebp),%eax
08ab7fc0 +0x174:  movl   $0x0,(%eax)
08ab7fc6 +0x17a:  mov    0x8(%ebp),%eax
08ab7fc9 +0x17d:  add    $0x1c,%eax
08ab7fcc +0x180:  mov    %eax,(%esp)
08ab7fcf +0x183:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
08ab7fd4 +0x188:  jmp    08ab80e5 <+0x299>
08ab7fd9 +0x18d:  mov    %edx,%ebx
08ab7fdb +0x18f:  mov    %eax,%esi
08ab7fdd +0x191:  mov    0x8(%ebp),%eax
08ab7fe0 +0x194:  add    $0x13c,%eax
08ab7fe5 +0x199:  mov    %eax,(%esp)
08ab7fe8 +0x19c:  call   08ab9a94 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x2cf>  ; global constructors keyed to TutorialData::TutorialData()+0x2cf
08ab7fed +0x1a1:  mov    %esi,%eax
08ab7fef +0x1a3:  mov    %ebx,%edx
08ab7ff1 +0x1a5:  jmp    08ab7ff3 <+0x1a7>
08ab7ff3 +0x1a7:  mov    %edx,%ebx
08ab7ff5 +0x1a9:  mov    %eax,%esi
08ab7ff7 +0x1ab:  mov    0x8(%ebp),%eax
08ab7ffa +0x1ae:  add    $0x124,%eax
08ab7fff +0x1b3:  mov    %eax,(%esp)
08ab8002 +0x1b6:  call   08ab980a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x45>  ; global constructors keyed to TutorialData::TutorialData()+0x45
08ab8007 +0x1bb:  mov    %esi,%eax
08ab8009 +0x1bd:  mov    %ebx,%edx
08ab800b +0x1bf:  jmp    08ab800d <+0x1c1>
08ab800d +0x1c1:  mov    %edx,%esi
08ab800f +0x1c3:  mov    %eax,%edi
08ab8011 +0x1c5:  mov    0x8(%ebp),%eax
08ab8014 +0x1c8:  add    $0xf4,%eax
08ab8019 +0x1cd:  test   %eax,%eax
08ab801b +0x1cf:  je     08ab8041 <+0x1f5>
08ab801d +0x1d1:  mov    0x8(%ebp),%eax
08ab8020 +0x1d4:  add    $0xf4,%eax
08ab8025 +0x1d9:  lea    0x30(%eax),%ebx
08ab8028 +0x1dc:  mov    0x8(%ebp),%eax
08ab802b +0x1df:  add    $0xf4,%eax
08ab8030 +0x1e4:  cmp    %eax,%ebx
08ab8032 +0x1e6:  je     08ab8041 <+0x1f5>
08ab8034 +0x1e8:  sub    $0xc,%ebx
08ab8037 +0x1eb:  mov    %ebx,(%esp)
08ab803a +0x1ee:  call   08ab99a8 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1e3>  ; global constructors keyed to TutorialData::TutorialData()+0x1e3
08ab803f +0x1f3:  jmp    08ab8028 <+0x1dc>
08ab8041 +0x1f5:  mov    %edi,%eax
08ab8043 +0x1f7:  mov    %esi,%edx
08ab8045 +0x1f9:  mov    %edx,%esi
08ab8047 +0x1fb:  mov    %eax,%edi
08ab8049 +0x1fd:  mov    0x8(%ebp),%eax
08ab804c +0x200:  add    $0x94,%eax
08ab8051 +0x205:  test   %eax,%eax
08ab8053 +0x207:  je     08ab8079 <+0x22d>
08ab8055 +0x209:  mov    0x8(%ebp),%eax
08ab8058 +0x20c:  add    $0x94,%eax
08ab805d +0x211:  lea    0x60(%eax),%ebx
08ab8060 +0x214:  mov    0x8(%ebp),%eax
08ab8063 +0x217:  add    $0x94,%eax
08ab8068 +0x21c:  cmp    %eax,%ebx
08ab806a +0x21e:  je     08ab8079 <+0x22d>
08ab806c +0x220:  sub    $0x18,%ebx
08ab806f +0x223:  mov    %ebx,(%esp)
08ab8072 +0x226:  call   08ab97f6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x31>  ; global constructors keyed to TutorialData::TutorialData()+0x31
08ab8077 +0x22b:  jmp    08ab8060 <+0x214>
08ab8079 +0x22d:  mov    %edi,%eax
08ab807b +0x22f:  mov    %esi,%edx
08ab807d +0x231:  mov    %edx,%esi
08ab807f +0x233:  mov    %eax,%edi
08ab8081 +0x235:  mov    0x8(%ebp),%eax
08ab8084 +0x238:  add    $0x34,%eax
08ab8087 +0x23b:  test   %eax,%eax
08ab8089 +0x23d:  je     08ab80ab <+0x25f>
08ab808b +0x23f:  mov    0x8(%ebp),%eax
08ab808e +0x242:  add    $0x34,%eax
08ab8091 +0x245:  lea    0x60(%eax),%ebx
08ab8094 +0x248:  mov    0x8(%ebp),%eax
08ab8097 +0x24b:  add    $0x34,%eax
08ab809a +0x24e:  cmp    %eax,%ebx
08ab809c +0x250:  je     08ab80ab <+0x25f>
08ab809e +0x252:  sub    $0x18,%ebx
08ab80a1 +0x255:  mov    %ebx,(%esp)
08ab80a4 +0x258:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab80a9 +0x25d:  jmp    08ab8094 <+0x248>
08ab80ab +0x25f:  mov    %edi,%eax
08ab80ad +0x261:  mov    %esi,%edx
08ab80af +0x263:  mov    %edx,%ebx
08ab80b1 +0x265:  mov    %eax,%esi
08ab80b3 +0x267:  mov    0x8(%ebp),%eax
08ab80b6 +0x26a:  add    $0x1c,%eax
08ab80b9 +0x26d:  mov    %eax,(%esp)
08ab80bc +0x270:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab80c1 +0x275:  mov    %esi,%eax
08ab80c3 +0x277:  mov    %ebx,%edx
08ab80c5 +0x279:  jmp    08ab80c7 <+0x27b>
08ab80c7 +0x27b:  mov    %edx,%ebx
08ab80c9 +0x27d:  mov    %eax,%esi
08ab80cb +0x27f:  mov    0x8(%ebp),%eax
08ab80ce +0x282:  add    $0x4,%eax
08ab80d1 +0x285:  mov    %eax,(%esp)
08ab80d4 +0x288:  call   08ab97e2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1d>  ; global constructors keyed to TutorialData::TutorialData()+0x1d
08ab80d9 +0x28d:  mov    %esi,%eax
08ab80db +0x28f:  mov    %ebx,%edx
08ab80dd +0x291:  mov    %eax,(%esp)
08ab80e0 +0x294:  call   08ae3750 <_Unwind_Resume>
08ab80e5 +0x299:  add    $0x2c,%esp
08ab80e8 +0x29c:  pop    %ebx
08ab80e9 +0x29d:  pop    %esi
08ab80ea +0x29e:  pop    %edi
08ab80eb +0x29f:  pop    %ebp
08ab80ec +0x2a0:  ret
08ab80ed +0x2a1:  nop
```

## 反编译 C

```c
// TutorialData::TutorialData @ 0x8ab7e4c

/* TutorialData::TutorialData() */

void __thiscall TutorialData::TutorialData(TutorialData *this)

{
  int iVar1;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  *this_01;
  vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *this_02;
  
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::map((map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
         *)(this + 4));
                    /* try { // try from 08ab7e6c to 08ab7e70 has its CatchHandler @ 08ab80c7 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab7e83 to 08ab7e87 has its CatchHandler @ 08ab7e9a */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(this_00);
    this_00 = this_00 + 0x18;
  }
  this_01 = (map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
             *)(this + 0x94);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab7ee8 to 08ab7eec has its CatchHandler @ 08ab7eff */
    std::
    map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
    ::map(this_01);
    this_01 = this_01 + 0x18;
  }
  this_02 = (vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
            (this + 0xf4);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab7f4d to 08ab7f51 has its CatchHandler @ 08ab7f64 */
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::vector(this_02);
    this_02 = this_02 + 0xc;
  }
                    /* try { // try from 08ab7fa8 to 08ab7fac has its CatchHandler @ 08ab800d */
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::map((map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
         *)(this + 0x124));
                    /* try { // try from 08ab7fb8 to 08ab7fbc has its CatchHandler @ 08ab7ff3 */
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::vector
            ((vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *)
             (this + 0x13c));
  *(undefined4 *)this = 0;
                    /* try { // try from 08ab7fcf to 08ab7fd3 has its CatchHandler @ 08ab7fd9 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  return;
}
```
