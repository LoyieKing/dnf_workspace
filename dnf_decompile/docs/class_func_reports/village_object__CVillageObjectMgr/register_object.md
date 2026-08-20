# register_object

`_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE`

`village_object::CVillageObjectMgr::register_object(village_object::Zone, village_object::IObject*)`

| 类 | 地址 |
|---|---|
| `village_object::CVillageObjectMgr` | `0x086b6f58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b6f58  _ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE
#           village_object::CVillageObjectMgr::register_object(village_object::Zone, village_object::IObject*)
# range [0x086b6f58, 0x086b70cf]
086b6f58 +0x000:  push   %ebp
086b6f59 +0x001:  mov    %esp,%ebp
086b6f5b +0x003:  push   %esi
086b6f5c +0x004:  push   %ebx
086b6f5d +0x005:  sub    $0x50,%esp
086b6f60 +0x008:  mov    0x8(%ebp),%edx
086b6f63 +0x00b:  lea    -0x34(%ebp),%eax
086b6f66 +0x00e:  lea    0xc(%ebp),%ecx
086b6f69 +0x011:  mov    %ecx,0x8(%esp)
086b6f6d +0x015:  mov    %edx,0x4(%esp)
086b6f71 +0x019:  mov    %eax,(%esp)
086b6f74 +0x01c:  call   086b7564 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x135>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x135
086b6f79 +0x021:  sub    $0x4,%esp
086b6f7c +0x024:  mov    0x8(%ebp),%edx
086b6f7f +0x027:  lea    -0x30(%ebp),%eax
086b6f82 +0x02a:  mov    %edx,0x4(%esp)
086b6f86 +0x02e:  mov    %eax,(%esp)
086b6f89 +0x031:  call   086b7590 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x161>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x161
086b6f8e +0x036:  sub    $0x4,%esp
086b6f91 +0x039:  lea    -0x30(%ebp),%eax
086b6f94 +0x03c:  mov    %eax,0x4(%esp)
086b6f98 +0x040:  lea    -0x34(%ebp),%eax
086b6f9b +0x043:  mov    %eax,(%esp)
086b6f9e +0x046:  call   086b75b6 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x187>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x187
086b6fa3 +0x04b:  test   %al,%al
086b6fa5 +0x04d:  je     086b6fef <+0x97>
086b6fa7 +0x04f:  lea    -0x34(%ebp),%eax
086b6faa +0x052:  mov    %eax,(%esp)
086b6fad +0x055:  call   086b75ca <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x19b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x19b
086b6fb2 +0x05a:  add    $0x4,%eax
086b6fb5 +0x05d:  mov    %eax,-0xc(%ebp)
086b6fb8 +0x060:  lea    0x10(%ebp),%eax
086b6fbb +0x063:  mov    %eax,0x4(%esp)
086b6fbf +0x067:  mov    -0xc(%ebp),%eax
086b6fc2 +0x06a:  mov    %eax,(%esp)
086b6fc5 +0x06d:  call   086b75d7 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x1a8>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x1a8
086b6fca +0x072:  test   %al,%al
086b6fcc +0x074:  je     086b6fd8 <+0x80>
086b6fce +0x076:  mov    $0x0,%eax
086b6fd3 +0x07b:  jmp    086b70c5 <+0x16d>
086b6fd8 +0x080:  lea    0x10(%ebp),%eax
086b6fdb +0x083:  mov    %eax,0x4(%esp)
086b6fdf +0x087:  mov    -0xc(%ebp),%eax
086b6fe2 +0x08a:  mov    %eax,(%esp)
086b6fe5 +0x08d:  call   086b7676 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x247>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x247
086b6fea +0x092:  jmp    086b70c0 <+0x168>
086b6fef +0x097:  lea    -0x3c(%ebp),%eax
086b6ff2 +0x09a:  mov    %eax,(%esp)
086b6ff5 +0x09d:  call   086b76ac <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x27d>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x27d
086b6ffa +0x0a2:  lea    0x10(%ebp),%eax
086b6ffd +0x0a5:  mov    %eax,0x4(%esp)
086b7001 +0x0a9:  lea    -0x3c(%ebp),%eax
086b7004 +0x0ac:  mov    %eax,(%esp)
086b7007 +0x0af:  call   086b7676 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x247>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x247
086b700c +0x0b4:  lea    -0x18(%ebp),%eax
086b700f +0x0b7:  lea    -0x3c(%ebp),%edx
086b7012 +0x0ba:  mov    %edx,0x8(%esp)
086b7016 +0x0be:  lea    0xc(%ebp),%edx
086b7019 +0x0c1:  mov    %edx,0x4(%esp)
086b701d +0x0c5:  mov    %eax,(%esp)
086b7020 +0x0c8:  call   086b7716 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x2e7>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x2e7
086b7025 +0x0cd:  sub    $0x4,%esp
086b7028 +0x0d0:  lea    -0x18(%ebp),%eax
086b702b +0x0d3:  mov    %eax,0x4(%esp)
086b702f +0x0d7:  lea    -0x24(%ebp),%eax
086b7032 +0x0da:  mov    %eax,(%esp)
086b7035 +0x0dd:  call   086b775a <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x32b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x32b
086b703a +0x0e2:  mov    0x8(%ebp),%edx
086b703d +0x0e5:  lea    -0x2c(%ebp),%eax
086b7040 +0x0e8:  lea    -0x24(%ebp),%ecx
086b7043 +0x0eb:  mov    %ecx,0x8(%esp)
086b7047 +0x0ef:  mov    %edx,0x4(%esp)
086b704b +0x0f3:  mov    %eax,(%esp)
086b704e +0x0f6:  call   086b779c <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x36d>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x36d
086b7053 +0x0fb:  sub    $0x4,%esp
086b7056 +0x0fe:  lea    -0x24(%ebp),%eax
086b7059 +0x101:  mov    %eax,(%esp)
086b705c +0x104:  call   086b74d4 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0xa5>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0xa5
086b7061 +0x109:  jmp    086b708d <+0x135>
086b7063 +0x10b:  mov    %edx,%ebx
086b7065 +0x10d:  mov    %eax,%esi
086b7067 +0x10f:  lea    -0x24(%ebp),%eax
086b706a +0x112:  mov    %eax,(%esp)
086b706d +0x115:  call   086b74d4 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0xa5>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0xa5
086b7072 +0x11a:  mov    %esi,%eax
086b7074 +0x11c:  mov    %ebx,%edx
086b7076 +0x11e:  jmp    086b7078 <+0x120>
086b7078 +0x120:  mov    %edx,%ebx
086b707a +0x122:  mov    %eax,%esi
086b707c +0x124:  lea    -0x18(%ebp),%eax
086b707f +0x127:  mov    %eax,(%esp)
086b7082 +0x12a:  call   086b74be <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x8f>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x8f
086b7087 +0x12f:  mov    %esi,%eax
086b7089 +0x131:  mov    %ebx,%edx
086b708b +0x133:  jmp    086b709a <+0x142>
086b708d +0x135:  lea    -0x18(%ebp),%eax
086b7090 +0x138:  mov    %eax,(%esp)
086b7093 +0x13b:  call   086b74be <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x8f>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x8f
086b7098 +0x140:  jmp    086b70b5 <+0x15d>
086b709a +0x142:  mov    %edx,%ebx
086b709c +0x144:  mov    %eax,%esi
086b709e +0x146:  lea    -0x3c(%ebp),%eax
086b70a1 +0x149:  mov    %eax,(%esp)
086b70a4 +0x14c:  call   086b74aa <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x7b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x7b
086b70a9 +0x151:  mov    %esi,%eax
086b70ab +0x153:  mov    %ebx,%edx
086b70ad +0x155:  mov    %eax,(%esp)
086b70b0 +0x158:  call   08ae3750 <_Unwind_Resume>
086b70b5 +0x15d:  lea    -0x3c(%ebp),%eax
086b70b8 +0x160:  mov    %eax,(%esp)
086b70bb +0x163:  call   086b74aa <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x7b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x7b
086b70c0 +0x168:  mov    $0x1,%eax
086b70c5 +0x16d:  lea    -0x8(%ebp),%esp
086b70c8 +0x170:  add    $0x0,%esp
086b70cb +0x173:  pop    %ebx
086b70cc +0x174:  pop    %esi
086b70cd +0x175:  pop    %ebp
086b70ce +0x176:  ret
086b70cf +0x177:  nop
```

## 反编译 C

```c
// village_object::CVillageObjectMgr::register_object @ 0x86b6f58

/* village_object::CVillageObjectMgr::register_object(village_object::Zone,
   village_object::IObject*) */

undefined4 village_object::CVillageObjectMgr::register_object(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  list<village_object::IObject*,std::allocator<village_object::IObject*>> local_40 [8];
  Zone local_38 [4];
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  local_34 [4];
  pair local_30 [8];
  pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
  local_28 [12];
  Zone local_1c [12];
  list<village_object::IObject*,std::allocator<village_object::IObject*>> *local_10;
  
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::find(local_38);
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::end(local_34);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                        *)local_38,(_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::list(local_40);
                    /* try { // try from 086b7007 to 086b7024 has its CatchHandler @ 086b709a */
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::push_back
              (local_40,(IObject **)&stack0x0000000c);
    std::
    make_pair<village_object::Zone&,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>&>
              (local_1c,(list *)&stack0x00000008);
                    /* try { // try from 086b7035 to 086b7039 has its CatchHandler @ 086b7078 */
    std::
    pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
    ::
    pair<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
              (local_28,local_1c);
                    /* try { // try from 086b704e to 086b7052 has its CatchHandler @ 086b7063 */
    std::
    map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
    ::insert(local_30);
                    /* try { // try from 086b705c to 086b7060 has its CatchHandler @ 086b7078 */
    std::
    pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
    ::~pair(local_28);
                    /* try { // try from 086b7093 to 086b7097 has its CatchHandler @ 086b709a */
    std::
    pair<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
    ::~pair((pair<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>
             *)local_1c);
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::~list(local_40);
  }
  else {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
            ::operator->((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                          *)local_38);
    local_10 = (list<village_object::IObject*,std::allocator<village_object::IObject*>> *)
               (iVar3 + 4);
    bVar2 = collision_detection::detect_collision<village_object::IObject*>
                      ((list *)local_10,(IObject **)&stack0x0000000c);
    if (bVar2) {
      return 0;
    }
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::push_back
              (local_10,(IObject **)&stack0x0000000c);
  }
  return 1;
}
```
