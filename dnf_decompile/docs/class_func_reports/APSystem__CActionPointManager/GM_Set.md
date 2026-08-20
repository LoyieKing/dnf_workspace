# GM_Set

`_ZN8APSystem19CActionPointManager6GM_SetER5CUserj`

`APSystem::CActionPointManager::GM_Set(CUser&, unsigned int)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x08121b3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121b3e  _ZN8APSystem19CActionPointManager6GM_SetER5CUserj
#           APSystem::CActionPointManager::GM_Set(CUser&, unsigned int)
# range [0x08121b3e, 0x08121d11]
08121b3e +0x000:  push   %ebp
08121b3f +0x001:  mov    %esp,%ebp
08121b41 +0x003:  push   %ebx
08121b42 +0x004:  sub    $0x44,%esp
08121b45 +0x007:  mov    0x8(%ebp),%eax
08121b48 +0x00a:  movb   $0x1,(%eax)
08121b4b +0x00d:  mov    0x8(%ebp),%eax
08121b4e +0x010:  movl   $0x0,0xc(%eax)
08121b55 +0x017:  mov    0x8(%ebp),%eax
08121b58 +0x01a:  movl   $0x0,0x4(%eax)
08121b5f +0x021:  movl   $0x0,-0x20(%ebp)
08121b66 +0x028:  jmp    08121bc3 <+0x85>
08121b68 +0x02a:  mov    -0x20(%ebp),%edx
08121b6b +0x02d:  mov    %edx,%eax
08121b6d +0x02f:  shl    $0x2,%eax
08121b70 +0x032:  add    %edx,%eax
08121b72 +0x034:  add    %eax,%eax
08121b74 +0x036:  add    %edx,%eax
08121b76 +0x038:  add    0x8(%ebp),%eax
08121b79 +0x03b:  add    $0x15,%eax
08121b7c +0x03e:  mov    %eax,-0x1c(%ebp)
08121b7f +0x041:  movl   $0x0,-0x18(%ebp)
08121b86 +0x048:  jmp    08121bb4 <+0x76>
08121b88 +0x04a:  mov    -0x18(%ebp),%eax
08121b8b +0x04d:  mov    -0x1c(%ebp),%edx
08121b8e +0x050:  movzbl 0x6(%edx,%eax,1),%eax
08121b93 +0x055:  test   %al,%al
08121b95 +0x057:  jle    08121bb0 <+0x72>
08121b97 +0x059:  mov    -0x18(%ebp),%eax
08121b9a +0x05c:  mov    -0x18(%ebp),%edx
08121b9d +0x05f:  mov    -0x1c(%ebp),%ecx
08121ba0 +0x062:  movzbl 0x6(%ecx,%edx,1),%edx
08121ba5 +0x067:  mov    %edx,%ecx
08121ba7 +0x069:  neg    %ecx
08121ba9 +0x06b:  mov    -0x1c(%ebp),%edx
08121bac +0x06e:  mov    %cl,0x6(%edx,%eax,1)
08121bb0 +0x072:  addl   $0x1,-0x18(%ebp)
08121bb4 +0x076:  cmpl   $0x4,-0x18(%ebp)
08121bb8 +0x07a:  setle  %al
08121bbb +0x07d:  test   %al,%al
08121bbd +0x07f:  jne    08121b88 <+0x4a>
08121bbf +0x081:  addl   $0x1,-0x20(%ebp)
08121bc3 +0x085:  cmpl   $0x12b,-0x20(%ebp)
08121bca +0x08c:  setle  %al
08121bcd +0x08f:  test   %al,%al
08121bcf +0x091:  jne    08121b68 <+0x2a>
08121bd1 +0x093:  movl   $0x0,-0x14(%ebp)
08121bd8 +0x09a:  jmp    08121cfa <+0x1bc>
08121bdd +0x09f:  mov    -0x14(%ebp),%edx
08121be0 +0x0a2:  mov    %edx,%eax
08121be2 +0x0a4:  shl    $0x2,%eax
08121be5 +0x0a7:  add    %edx,%eax
08121be7 +0x0a9:  add    %eax,%eax
08121be9 +0x0ab:  add    %edx,%eax
08121beb +0x0ad:  add    0x8(%ebp),%eax
08121bee +0x0b0:  add    $0x15,%eax
08121bf1 +0x0b3:  mov    %eax,-0x10(%ebp)
08121bf4 +0x0b6:  movl   $0x0,-0xc(%ebp)
08121bfb +0x0bd:  jmp    08121cd1 <+0x193>
08121c00 +0x0c2:  mov    -0xc(%ebp),%eax
08121c03 +0x0c5:  mov    -0x10(%ebp),%edx
08121c06 +0x0c8:  movzbl 0x6(%edx,%eax,1),%eax
08121c0b +0x0cd:  test   %al,%al
08121c0d +0x0cf:  jns    08121ccd <+0x18f>
08121c13 +0x0d5:  mov    0x8(%ebp),%eax
08121c16 +0x0d8:  mov    0xc(%eax),%edx
08121c19 +0x0db:  mov    0x8(%ebp),%eax
08121c1c +0x0de:  mov    %edx,0x4(%eax)
08121c1f +0x0e1:  mov    -0xc(%ebp),%eax
08121c22 +0x0e4:  mov    -0xc(%ebp),%edx
08121c25 +0x0e7:  mov    -0x10(%ebp),%ecx
08121c28 +0x0ea:  movzbl 0x6(%ecx,%edx,1),%edx
08121c2d +0x0ef:  mov    %edx,%ecx
08121c2f +0x0f1:  neg    %ecx
08121c31 +0x0f3:  mov    -0x10(%ebp),%edx
08121c34 +0x0f6:  mov    %cl,0x6(%edx,%eax,1)
08121c38 +0x0fa:  mov    0x8(%ebp),%eax
08121c3b +0x0fd:  mov    0xc(%eax),%ecx
08121c3e +0x100:  mov    -0xc(%ebp),%eax
08121c41 +0x103:  mov    -0x10(%ebp),%edx
08121c44 +0x106:  movzbl 0x6(%edx,%eax,1),%eax
08121c49 +0x10b:  movsbl %al,%eax
08121c4c +0x10e:  lea    (%ecx,%eax,1),%edx
08121c4f +0x111:  mov    0x8(%ebp),%eax
08121c52 +0x114:  mov    %edx,0xc(%eax)
08121c55 +0x117:  mov    -0x14(%ebp),%edx
08121c58 +0x11a:  mov    0x8(%ebp),%ecx
08121c5b +0x11d:  mov    %edx,%eax
08121c5d +0x11f:  shl    $0x2,%eax
08121c60 +0x122:  add    %edx,%eax
08121c62 +0x124:  add    %eax,%eax
08121c64 +0x126:  add    %edx,%eax
08121c66 +0x128:  mov    0x17(%eax,%ecx,1),%ecx
08121c6a +0x12c:  mov    -0x14(%ebp),%edx
08121c6d +0x12f:  mov    0x8(%ebp),%ebx
08121c70 +0x132:  mov    %edx,%eax
08121c72 +0x134:  shl    $0x2,%eax
08121c75 +0x137:  add    %edx,%eax
08121c77 +0x139:  add    %eax,%eax
08121c79 +0x13b:  add    %edx,%eax
08121c7b +0x13d:  movzwl 0x15(%eax,%ebx,1),%eax
08121c80 +0x142:  movzwl %ax,%eax
08121c83 +0x145:  movl   $0x0,0x10(%esp)
08121c8b +0x14d:  movl   $0x1,0xc(%esp)
08121c93 +0x155:  mov    %ecx,0x8(%esp)
08121c97 +0x159:  mov    %eax,0x4(%esp)
08121c9b +0x15d:  mov    0xc(%ebp),%eax
08121c9e +0x160:  mov    %eax,(%esp)
08121ca1 +0x163:  call   081223b4 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS>  ; APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool, ENUM_PACKETCLASS)
08121ca6 +0x168:  mov    0xc(%ebp),%eax
08121ca9 +0x16b:  mov    %eax,(%esp)
08121cac +0x16e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08121cb1 +0x173:  mov    0x8(%ebp),%edx
08121cb4 +0x176:  mov    0xc(%edx),%ecx
08121cb7 +0x179:  mov    0x8(%ebp),%edx
08121cba +0x17c:  mov    0x4(%edx),%edx
08121cbd +0x17f:  mov    %eax,0x8(%esp)
08121cc1 +0x183:  mov    %ecx,0x4(%esp)
08121cc5 +0x187:  mov    %edx,(%esp)
08121cc8 +0x18a:  call   08122564 <_ZN8APSystem9CUserProc28CheckAndSendToMessageAllUserEjjPKc>  ; APSystem::CUserProc::CheckAndSendToMessageAllUser(unsigned int, unsigned int, char const*)
08121ccd +0x18f:  addl   $0x1,-0xc(%ebp)
08121cd1 +0x193:  cmpl   $0x4,-0xc(%ebp)
08121cd5 +0x197:  jg     08121ce9 <+0x1ab>
08121cd7 +0x199:  mov    0x8(%ebp),%eax
08121cda +0x19c:  mov    0xc(%eax),%eax
08121cdd +0x19f:  cmp    0x10(%ebp),%eax
08121ce0 +0x1a2:  jae    08121ce9 <+0x1ab>
08121ce2 +0x1a4:  mov    $0x1,%eax
08121ce7 +0x1a9:  jmp    08121cee <+0x1b0>
08121ce9 +0x1ab:  mov    $0x0,%eax
08121cee +0x1b0:  test   %al,%al
08121cf0 +0x1b2:  jne    08121c00 <+0xc2>
08121cf6 +0x1b8:  addl   $0x1,-0x14(%ebp)
08121cfa +0x1bc:  cmpl   $0x12b,-0x14(%ebp)
08121d01 +0x1c3:  setle  %al
08121d04 +0x1c6:  test   %al,%al
08121d06 +0x1c8:  jne    08121bdd <+0x9f>
08121d0c +0x1ce:  add    $0x44,%esp
08121d0f +0x1d1:  pop    %ebx
08121d10 +0x1d2:  pop    %ebp
08121d11 +0x1d3:  ret
```

## 反编译 C

```c
// APSystem::CActionPointManager::GM_Set @ 0x8121b3e

/* APSystem::CActionPointManager::GM_Set(CUser&, unsigned int) */

void __thiscall
APSystem::CActionPointManager::GM_Set(CActionPointManager *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  int local_24;
  int local_1c;
  int local_18;
  int local_10;
  
  *this = (CActionPointManager)0x1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  for (local_24 = 0; local_24 < 300; local_24 = local_24 + 1) {
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      if ('\0' < (char)this[local_1c + local_24 * 0xb + 0x1b]) {
        this[local_1c + local_24 * 0xb + 0x1b] =
             (CActionPointManager)-(char)this[local_1c + local_24 * 0xb + 0x1b];
      }
    }
  }
  for (local_18 = 0; local_18 < 300; local_18 = local_18 + 1) {
    local_10 = 0;
    while( true ) {
      if ((local_10 < 5) && (*(uint *)(this + 0xc) < param_2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      if ((char)this[local_10 + local_18 * 0xb + 0x1b] < '\0') {
        *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
        this[local_10 + local_18 * 0xb + 0x1b] =
             (CActionPointManager)-(char)this[local_10 + local_18 * 0xb + 0x1b];
        *(int *)(this + 0xc) =
             *(int *)(this + 0xc) + (int)(char)this[local_10 + local_18 * 0xb + 0x1b];
        CUserProc::SendActionClear
                  (param_1,*(undefined2 *)(this + local_18 * 0xb + 0x15),
                   *(undefined4 *)(this + local_18 * 0xb + 0x17),1,0);
        pcVar2 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        CUserProc::CheckAndSendToMessageAllUser(*(uint *)(this + 4),*(uint *)(this + 0xc),pcVar2);
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}
```
