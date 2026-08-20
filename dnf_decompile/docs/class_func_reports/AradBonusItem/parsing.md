# parsing

`_ZN13AradBonusItem7parsingEPc`

`AradBonusItem::parsing(char*)`

| 类 | 地址 |
|---|---|
| `AradBonusItem` | `0x081a238a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a238a  _ZN13AradBonusItem7parsingEPc
#           AradBonusItem::parsing(char*)
# range [0x081a238a, 0x081a252b]
081a238a +0x000:  push   %ebp
081a238b +0x001:  mov    %esp,%ebp
081a238d +0x003:  push   %esi
081a238e +0x004:  push   %ebx
081a238f +0x005:  sub    $0xa0,%esp
081a2395 +0x00b:  lea    -0x94(%ebp),%eax
081a239b +0x011:  mov    %eax,(%esp)
081a239e +0x014:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a23a3 +0x019:  movl   $"bonus_item",0x8(%esp)
081a23ab +0x021:  mov    0xc(%ebp),%eax
081a23ae +0x024:  mov    %eax,0x4(%esp)
081a23b2 +0x028:  lea    -0x94(%ebp),%eax
081a23b8 +0x02e:  mov    %eax,(%esp)
081a23bb +0x031:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a23c0 +0x036:  xor    $0x1,%eax
081a23c3 +0x039:  test   %al,%al
081a23c5 +0x03b:  je     081a23d1 <+0x47>
081a23c7 +0x03d:  mov    $0x79,%ebx
081a23cc +0x042:  jmp    081a2511 <+0x187>
081a23d1 +0x047:  lea    -0x94(%ebp),%eax
081a23d7 +0x04d:  mov    %eax,(%esp)
081a23da +0x050:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a23df +0x055:  test   %eax,%eax
081a23e1 +0x057:  sete   %al
081a23e4 +0x05a:  test   %al,%al
081a23e6 +0x05c:  je     081a23f2 <+0x68>
081a23e8 +0x05e:  mov    $0x7c,%ebx
081a23ed +0x063:  jmp    081a2511 <+0x187>
081a23f2 +0x068:  lea    -0x38(%ebp),%eax
081a23f5 +0x06b:  mov    %eax,(%esp)
081a23f8 +0x06e:  call   081a407e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xd9>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xd9
081a23fd +0x073:  movl   $0x0,-0xc(%ebp)
081a2404 +0x07a:  jmp    081a24d0 <+0x146>
081a2409 +0x07f:  movl   $"item_id",0x8(%esp)
081a2411 +0x087:  mov    -0xc(%ebp),%eax
081a2414 +0x08a:  mov    %eax,0x4(%esp)
081a2418 +0x08e:  lea    -0x94(%ebp),%eax
081a241e +0x094:  mov    %eax,(%esp)
081a2421 +0x097:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a2426 +0x09c:  mov    %eax,-0x34(%ebp)
081a2429 +0x09f:  movl   $"bonus_type",0x8(%esp)
081a2431 +0x0a7:  mov    -0xc(%ebp),%eax
081a2434 +0x0aa:  mov    %eax,0x4(%esp)
081a2438 +0x0ae:  lea    -0x94(%ebp),%eax
081a243e +0x0b4:  mov    %eax,(%esp)
081a2441 +0x0b7:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a2446 +0x0bc:  mov    %ax,-0x30(%ebp)
081a244a +0x0c0:  movl   $"bonus_value",0x8(%esp)
081a2452 +0x0c8:  mov    -0xc(%ebp),%eax
081a2455 +0x0cb:  mov    %eax,0x4(%esp)
081a2459 +0x0cf:  lea    -0x94(%ebp),%eax
081a245f +0x0d5:  mov    %eax,(%esp)
081a2462 +0x0d8:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a2467 +0x0dd:  mov    %eax,-0x38(%ebp)
081a246a +0x0e0:  lea    -0x1c(%ebp),%eax
081a246d +0x0e3:  lea    -0x38(%ebp),%edx
081a2470 +0x0e6:  mov    %edx,0x8(%esp)
081a2474 +0x0ea:  lea    -0x38(%ebp),%edx
081a2477 +0x0ed:  add    $0x4,%edx
081a247a +0x0f0:  mov    %edx,0x4(%esp)
081a247e +0x0f4:  mov    %eax,(%esp)
081a2481 +0x0f7:  call   081a4411 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x46c>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x46c
081a2486 +0x0fc:  sub    $0x4,%esp
081a2489 +0x0ff:  lea    -0x1c(%ebp),%eax
081a248c +0x102:  mov    %eax,0x4(%esp)
081a2490 +0x106:  lea    -0x2c(%ebp),%eax
081a2493 +0x109:  mov    %eax,(%esp)
081a2496 +0x10c:  call   081a4450 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x4ab>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x4ab
081a249b +0x111:  mov    0x8(%ebp),%eax
081a249e +0x114:  lea    0x4(%eax),%ecx
081a24a1 +0x117:  lea    -0x40(%ebp),%eax
081a24a4 +0x11a:  lea    -0x2c(%ebp),%edx
081a24a7 +0x11d:  mov    %edx,0x8(%esp)
081a24ab +0x121:  mov    %ecx,0x4(%esp)
081a24af +0x125:  mov    %eax,(%esp)
081a24b2 +0x128:  call   081a4490 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x4eb>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x4eb
081a24b7 +0x12d:  sub    $0x4,%esp
081a24ba +0x130:  movzbl -0x3c(%ebp),%eax
081a24be +0x134:  xor    $0x1,%eax
081a24c1 +0x137:  test   %al,%al
081a24c3 +0x139:  je     081a24cc <+0x142>
081a24c5 +0x13b:  mov    $0x88,%ebx
081a24ca +0x140:  jmp    081a2511 <+0x187>
081a24cc +0x142:  addl   $0x1,-0xc(%ebp)
081a24d0 +0x146:  lea    -0x94(%ebp),%eax
081a24d6 +0x14c:  mov    %eax,(%esp)
081a24d9 +0x14f:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a24de +0x154:  cmp    -0xc(%ebp),%eax
081a24e1 +0x157:  setg   %al
081a24e4 +0x15a:  test   %al,%al
081a24e6 +0x15c:  jne    081a2409 <+0x7f>
081a24ec +0x162:  mov    $0x0,%ebx
081a24f1 +0x167:  jmp    081a2511 <+0x187>
081a24f3 +0x169:  mov    %edx,%ebx
081a24f5 +0x16b:  mov    %eax,%esi
081a24f7 +0x16d:  lea    -0x94(%ebp),%eax
081a24fd +0x173:  mov    %eax,(%esp)
081a2500 +0x176:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a2505 +0x17b:  mov    %esi,%eax
081a2507 +0x17d:  mov    %ebx,%edx
081a2509 +0x17f:  mov    %eax,(%esp)
081a250c +0x182:  call   08ae3750 <_Unwind_Resume>
081a2511 +0x187:  lea    -0x94(%ebp),%eax
081a2517 +0x18d:  mov    %eax,(%esp)
081a251a +0x190:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a251f +0x195:  mov    %ebx,%eax
081a2521 +0x197:  lea    -0x8(%ebp),%esp
081a2524 +0x19a:  add    $0x0,%esp
081a2527 +0x19d:  pop    %ebx
081a2528 +0x19e:  pop    %esi
081a2529 +0x19f:  pop    %ebp
081a252a +0x1a0:  ret
081a252b +0x1a1:  nop
```

## 反编译 C

```c
// AradBonusItem::parsing @ 0x81a238a

/* AradBonusItem::parsing(char*) */

undefined4 __thiscall AradBonusItem::parsing(AradBonusItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_98 [84];
  pair local_44 [4];
  char local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  pair<int_const,AradBonusItem::Data> local_30 [16];
  uint local_20 [4];
  int local_10;
  
  Arad_Script::Arad_Script(local_98);
                    /* try { // try from 081a23bb to 081a24b6 has its CatchHandler @ 081a24f3 */
  cVar1 = Arad_Script::Load(local_98,param_1,"bonus_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_98);
    if (iVar2 == 0) {
      uVar3 = 0x7c;
    }
    else {
      Data::Data((Data *)&local_3c);
      local_10 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_98);
        if (iVar2 <= local_10) break;
        local_38 = Arad_Script::GetInt(local_98,local_10,"item_id");
        local_34 = Arad_Script::GetInt(local_98,local_10,"bonus_type");
        local_3c = Arad_Script::GetInt(local_98,local_10,"bonus_value");
        std::make_pair<unsigned_int&,AradBonusItem::Data&>(local_20,(Data *)&local_38);
        std::pair<int_const,AradBonusItem::Data>::pair<unsigned_int,AradBonusItem::Data>
                  (local_30,(pair *)local_20);
        std::
        map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
        ::insert(local_44);
        if (local_40 != '\x01') {
          uVar3 = 0x88;
          goto LAB_081a2511;
        }
        local_10 = local_10 + 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x79;
  }
LAB_081a2511:
  Arad_Script::~Arad_Script(local_98);
  return uVar3;
}
```
