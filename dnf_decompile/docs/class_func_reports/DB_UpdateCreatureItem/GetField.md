# GetField

`_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM`

`DB_UpdateCreatureItem::GetField(MySQL*, char*, SIG_CREATURE_ITEM*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCreatureItem` | `0x084200a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084200a8  _ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM
#           DB_UpdateCreatureItem::GetField(MySQL*, char*, SIG_CREATURE_ITEM*)
# range [0x084200a8, 0x084203e7]
084200a8 +0x000:  push   %ebp
084200a9 +0x001:  mov    %esp,%ebp
084200ab +0x003:  push   %esi
084200ac +0x004:  push   %ebx
084200ad +0x005:  sub    $0x40,%esp
084200b0 +0x008:  movb   $0x1,-0xd(%ebp)
084200b4 +0x00c:  lea    -0x26(%ebp),%eax
084200b7 +0x00f:  mov    $0x19,%ebx
084200bc +0x014:  mov    $0x0,%edx
084200c1 +0x019:  mov    %eax,%ecx
084200c3 +0x01b:  and    $0x2,%ecx
084200c6 +0x01e:  test   %ecx,%ecx
084200c8 +0x020:  je     084200d3 <+0x2b>
084200ca +0x022:  mov    %dx,(%eax)
084200cd +0x025:  add    $0x2,%eax
084200d0 +0x028:  sub    $0x2,%ebx
084200d3 +0x02b:  mov    %ebx,%esi
084200d5 +0x02d:  and    $0xfffffffc,%esi
084200d8 +0x030:  mov    $0x0,%ecx
084200dd +0x035:  mov    %edx,(%eax,%ecx,1)
084200e0 +0x038:  add    $0x4,%ecx
084200e3 +0x03b:  cmp    %esi,%ecx
084200e5 +0x03d:  jb     084200dd <+0x35>
084200e7 +0x03f:  add    %ecx,%eax
084200e9 +0x041:  mov    %ebx,%ecx
084200eb +0x043:  and    $0x2,%ecx
084200ee +0x046:  test   %ecx,%ecx
084200f0 +0x048:  je     084200f8 <+0x50>
084200f2 +0x04a:  mov    %dx,(%eax)
084200f5 +0x04d:  add    $0x2,%eax
084200f8 +0x050:  mov    %ebx,%ecx
084200fa +0x052:  and    $0x1,%ecx
084200fd +0x055:  test   %ecx,%ecx
084200ff +0x057:  je     08420106 <+0x5e>
08420101 +0x059:  mov    %dl,(%eax)
08420103 +0x05b:  add    $0x1,%eax
08420106 +0x05e:  mov    0x14(%ebp),%eax
08420109 +0x061:  add    $0x34,%eax
0842010c +0x064:  mov    %eax,0x8(%esp)
08420110 +0x068:  lea    -0x26(%ebp),%eax
08420113 +0x06b:  mov    %eax,0x4(%esp)
08420117 +0x06f:  mov    0xc(%ebp),%eax
0842011a +0x072:  mov    %eax,(%esp)
0842011d +0x075:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08420122 +0x07a:  mov    0x14(%ebp),%eax
08420125 +0x07d:  mov    (%eax),%eax
08420127 +0x07f:  lea    -0x26(%ebp),%edx
0842012a +0x082:  mov    %edx,0x14(%esp)
0842012e +0x086:  movl   $"name='%s'",0x10(%esp)
08420136 +0x08e:  movl   $0x1,0xc(%esp)
0842013e +0x096:  mov    %eax,0x8(%esp)
08420142 +0x09a:  mov    0x10(%ebp),%eax
08420145 +0x09d:  mov    %eax,0x4(%esp)
08420149 +0x0a1:  lea    -0xd(%ebp),%eax
0842014c +0x0a4:  mov    %eax,(%esp)
0842014f +0x0a7:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420154 +0x0ac:  mov    0x14(%ebp),%eax
08420157 +0x0af:  mov    0x44(%eax),%edx
0842015a +0x0b2:  mov    0x14(%ebp),%eax
0842015d +0x0b5:  mov    (%eax),%eax
0842015f +0x0b7:  mov    %edx,0x14(%esp)
08420163 +0x0bb:  movl   $"stomach=%d",0x10(%esp)
0842016b +0x0c3:  movl   $0x2,0xc(%esp)
08420173 +0x0cb:  mov    %eax,0x8(%esp)
08420177 +0x0cf:  mov    0x10(%ebp),%eax
0842017a +0x0d2:  mov    %eax,0x4(%esp)
0842017e +0x0d6:  lea    -0xd(%ebp),%eax
08420181 +0x0d9:  mov    %eax,(%esp)
08420184 +0x0dc:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420189 +0x0e1:  mov    0x14(%ebp),%eax
0842018c +0x0e4:  movzbl 0x50(%eax),%eax
08420190 +0x0e8:  movsbl %al,%edx
08420193 +0x0eb:  mov    0x14(%ebp),%eax
08420196 +0x0ee:  mov    (%eax),%eax
08420198 +0x0f0:  mov    %edx,0x14(%esp)
0842019c +0x0f4:  movl   $"creature_type=%d",0x10(%esp)
084201a4 +0x0fc:  movl   $0x4,0xc(%esp)
084201ac +0x104:  mov    %eax,0x8(%esp)
084201b0 +0x108:  mov    0x10(%ebp),%eax
084201b3 +0x10b:  mov    %eax,0x4(%esp)
084201b7 +0x10f:  lea    -0xd(%ebp),%eax
084201ba +0x112:  mov    %eax,(%esp)
084201bd +0x115:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
084201c2 +0x11a:  mov    0x14(%ebp),%eax
084201c5 +0x11d:  mov    0x4c(%eax),%edx
084201c8 +0x120:  mov    0x14(%ebp),%eax
084201cb +0x123:  mov    (%eax),%eax
084201cd +0x125:  mov    %edx,0x14(%esp)
084201d1 +0x129:  movl   $"exp=%d",0x10(%esp)
084201d9 +0x131:  movl   $0x8,0xc(%esp)
084201e1 +0x139:  mov    %eax,0x8(%esp)
084201e5 +0x13d:  mov    0x10(%ebp),%eax
084201e8 +0x140:  mov    %eax,0x4(%esp)
084201ec +0x144:  lea    -0xd(%ebp),%eax
084201ef +0x147:  mov    %eax,(%esp)
084201f2 +0x14a:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
084201f7 +0x14f:  mov    0x14(%ebp),%eax
084201fa +0x152:  mov    0x48(%eax),%edx
084201fd +0x155:  mov    0x14(%ebp),%eax
08420200 +0x158:  mov    (%eax),%eax
08420202 +0x15a:  mov    %edx,0x14(%esp)
08420206 +0x15e:  movl   $"charac_no=%d",0x10(%esp)
0842020e +0x166:  movl   $0x10,0xc(%esp)
08420216 +0x16e:  mov    %eax,0x8(%esp)
0842021a +0x172:  mov    0x10(%ebp),%eax
0842021d +0x175:  mov    %eax,0x4(%esp)
08420221 +0x179:  lea    -0xd(%ebp),%eax
08420224 +0x17c:  mov    %eax,(%esp)
08420227 +0x17f:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
0842022c +0x184:  mov    0x14(%ebp),%eax
0842022f +0x187:  mov    0x2c(%eax),%edx
08420232 +0x18a:  mov    0x14(%ebp),%eax
08420235 +0x18d:  mov    (%eax),%eax
08420237 +0x18f:  mov    %edx,0x14(%esp)
0842023b +0x193:  movl   $"slot=%d",0x10(%esp)
08420243 +0x19b:  movl   $0x20,0xc(%esp)
0842024b +0x1a3:  mov    %eax,0x8(%esp)
0842024f +0x1a7:  mov    0x10(%ebp),%eax
08420252 +0x1aa:  mov    %eax,0x4(%esp)
08420256 +0x1ae:  lea    -0xd(%ebp),%eax
08420259 +0x1b1:  mov    %eax,(%esp)
0842025c +0x1b4:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420261 +0x1b9:  mov    0x14(%ebp),%eax
08420264 +0x1bc:  mov    0x8(%eax),%edx
08420267 +0x1bf:  mov    0x14(%ebp),%eax
0842026a +0x1c2:  mov    (%eax),%eax
0842026c +0x1c4:  mov    %edx,0x14(%esp)
08420270 +0x1c8:  movl   $"it_id=%d",0x10(%esp)
08420278 +0x1d0:  movl   $0x40,0xc(%esp)
08420280 +0x1d8:  mov    %eax,0x8(%esp)
08420284 +0x1dc:  mov    0x10(%ebp),%eax
08420287 +0x1df:  mov    %eax,0x4(%esp)
0842028b +0x1e3:  lea    -0xd(%ebp),%eax
0842028e +0x1e6:  mov    %eax,(%esp)
08420291 +0x1e9:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420296 +0x1ee:  mov    0x14(%ebp),%eax
08420299 +0x1f1:  movzbl 0x52(%eax),%eax
0842029d +0x1f5:  movsbl %al,%edx
084202a0 +0x1f8:  mov    0x14(%ebp),%eax
084202a3 +0x1fb:  mov    (%eax),%eax
084202a5 +0x1fd:  mov    %edx,0x14(%esp)
084202a9 +0x201:  movl   $"no_charge=%d",0x10(%esp)
084202b1 +0x209:  movl   $0x80,0xc(%esp)
084202b9 +0x211:  mov    %eax,0x8(%esp)
084202bd +0x215:  mov    0x10(%ebp),%eax
084202c0 +0x218:  mov    %eax,0x4(%esp)
084202c4 +0x21c:  lea    -0xd(%ebp),%eax
084202c7 +0x21f:  mov    %eax,(%esp)
084202ca +0x222:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
084202cf +0x227:  mov    0x14(%ebp),%eax
084202d2 +0x22a:  movzbl 0x53(%eax),%eax
084202d6 +0x22e:  movsbl %al,%edx
084202d9 +0x231:  mov    0x14(%ebp),%eax
084202dc +0x234:  mov    (%eax),%eax
084202de +0x236:  mov    %edx,0x14(%esp)
084202e2 +0x23a:  movl   $"stat=%d",0x10(%esp)
084202ea +0x242:  movl   $0x100,0xc(%esp)
084202f2 +0x24a:  mov    %eax,0x8(%esp)
084202f6 +0x24e:  mov    0x10(%ebp),%eax
084202f9 +0x251:  mov    %eax,0x4(%esp)
084202fd +0x255:  lea    -0xd(%ebp),%eax
08420300 +0x258:  mov    %eax,(%esp)
08420303 +0x25b:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420308 +0x260:  mov    0x14(%ebp),%eax
0842030b +0x263:  mov    0x54(%eax),%eax
0842030e +0x266:  test   %eax,%eax
08420310 +0x268:  jne    0842034c <+0x2a4>
08420312 +0x26a:  mov    0x14(%ebp),%eax
08420315 +0x26d:  mov    0x58(%eax),%eax
08420318 +0x270:  test   %eax,%eax
0842031a +0x272:  jne    0842034c <+0x2a4>
0842031c +0x274:  mov    0x14(%ebp),%eax
0842031f +0x277:  mov    (%eax),%eax
08420321 +0x279:  movl   $"expire_date='9999-12-31 23:59:59'",0x10(%esp)
08420329 +0x281:  movl   $0x200,0xc(%esp)
08420331 +0x289:  mov    %eax,0x8(%esp)
08420335 +0x28d:  mov    0x10(%ebp),%eax
08420338 +0x290:  mov    %eax,0x4(%esp)
0842033c +0x294:  lea    -0xd(%ebp),%eax
0842033f +0x297:  mov    %eax,(%esp)
08420342 +0x29a:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420347 +0x29f:  jmp    084203e0 <+0x338>
0842034c +0x2a4:  mov    0x14(%ebp),%eax
0842034f +0x2a7:  mov    0x54(%eax),%eax
08420352 +0x2aa:  test   %eax,%eax
08420354 +0x2ac:  jne    08420397 <+0x2ef>
08420356 +0x2ae:  mov    0x14(%ebp),%eax
08420359 +0x2b1:  mov    0x58(%eax),%eax
0842035c +0x2b4:  test   %eax,%eax
0842035e +0x2b6:  je     08420397 <+0x2ef>
08420360 +0x2b8:  mov    0x14(%ebp),%eax
08420363 +0x2bb:  mov    0x58(%eax),%edx
08420366 +0x2be:  mov    0x14(%ebp),%eax
08420369 +0x2c1:  mov    (%eax),%eax
0842036b +0x2c3:  mov    %edx,0x14(%esp)
0842036f +0x2c7:  movl   $"expire_date=from_unixtime('%d')",0x10(%esp)
08420377 +0x2cf:  movl   $0x200,0xc(%esp)
0842037f +0x2d7:  mov    %eax,0x8(%esp)
08420383 +0x2db:  mov    0x10(%ebp),%eax
08420386 +0x2de:  mov    %eax,0x4(%esp)
0842038a +0x2e2:  lea    -0xd(%ebp),%eax
0842038d +0x2e5:  mov    %eax,(%esp)
08420390 +0x2e8:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
08420395 +0x2ed:  jmp    084203e0 <+0x338>
08420397 +0x2ef:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0842039c +0x2f4:  mov    %eax,-0xc(%ebp)
0842039f +0x2f7:  mov    0x14(%ebp),%eax
084203a2 +0x2fa:  mov    0x54(%eax),%eax
084203a5 +0x2fd:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
084203ab +0x303:  add    %eax,-0xc(%ebp)
084203ae +0x306:  mov    0x14(%ebp),%eax
084203b1 +0x309:  mov    (%eax),%eax
084203b3 +0x30b:  mov    -0xc(%ebp),%edx
084203b6 +0x30e:  mov    %edx,0x14(%esp)
084203ba +0x312:  movl   $"expire_date=from_unixtime('%d')",0x10(%esp)
084203c2 +0x31a:  movl   $0x200,0xc(%esp)
084203ca +0x322:  mov    %eax,0x8(%esp)
084203ce +0x326:  mov    0x10(%ebp),%eax
084203d1 +0x329:  mov    %eax,0x4(%esp)
084203d5 +0x32d:  lea    -0xd(%ebp),%eax
084203d8 +0x330:  mov    %eax,(%esp)
084203db +0x333:  call   0841fff8 <_Z14AddFieldStringRbPciiPKcz>  ; AddFieldString(bool&, char*, int, int, char const*, ...)
084203e0 +0x338:  add    $0x40,%esp
084203e3 +0x33b:  pop    %ebx
084203e4 +0x33c:  pop    %esi
084203e5 +0x33d:  pop    %ebp
084203e6 +0x33e:  ret
084203e7 +0x33f:  nop
```

## 反编译 C

```c
// DB_UpdateCreatureItem::GetField @ 0x84200a8

/* DB_UpdateCreatureItem::GetField(MySQL*, char*, SIG_CREATURE_ITEM*) */

void __thiscall
DB_UpdateCreatureItem::GetField
          (DB_UpdateCreatureItem *this,MySQL *param_1,char *param_2,SIG_CREATURE_ITEM *param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char local_2a [4];
  char acStack_26 [21];
  bool local_11;
  int local_10;
  
  local_11 = true;
  pcVar2 = local_2a;
  uVar5 = 0x19;
  bVar6 = ((uint)pcVar2 & 2) != 0;
  if (bVar6) {
    local_2a[0] = '\0';
    local_2a[1] = '\0';
    pcVar2 = local_2a + 2;
    uVar5 = 0x17;
  }
  uVar3 = 0;
  do {
    pcVar1 = pcVar2 + uVar3;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar3 = uVar3 + 4;
  } while (uVar3 < (uVar5 & 0xfffffffc));
  pcVar2 = pcVar2 + uVar3;
  if (bVar6) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  *pcVar2 = '\0';
  MySQL::escape_string(param_1,local_2a,(char *)(param_3 + 0x34));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,1,"name=\'%s\'",local_2a);
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,2,"stomach=%d",
                 *(undefined4 *)(param_3 + 0x44));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,4,"creature_type=%d",
                 (int)(char)param_3[0x50]);
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,8,"exp=%d",
                 *(undefined4 *)(param_3 + 0x4c));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x10,"charac_no=%d",
                 *(undefined4 *)(param_3 + 0x48));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x20,"slot=%d",
                 *(undefined4 *)(param_3 + 0x2c));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x40,"it_id=%d",
                 *(undefined4 *)(param_3 + 8));
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x80,"no_charge=%d",
                 (int)(char)param_3[0x52]);
  iVar4 = (int)(char)param_3[0x53];
  AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x100,"stat=%d",iVar4);
  if ((*(int *)(param_3 + 0x54) == 0) && (*(int *)(param_3 + 0x58) == 0)) {
    AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x200,
                   "expire_date=\'9999-12-31 23:59:59\'",iVar4);
  }
  else if ((*(int *)(param_3 + 0x54) == 0) && (*(int *)(param_3 + 0x58) != 0)) {
    AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x200,
                   "expire_date=from_unixtime(\'%d\')",*(undefined4 *)(param_3 + 0x58));
  }
  else {
    local_10 = OS_API::GetDateTimeTick();
    local_10 = local_10 + *(int *)(param_3 + 0x54) * 0x15180;
    AddFieldString((bool *)(acStack_26 + 0x15),param_2,*(int *)param_3,0x200,
                   "expire_date=from_unixtime(\'%d\')",local_10);
  }
  return;
}
```
