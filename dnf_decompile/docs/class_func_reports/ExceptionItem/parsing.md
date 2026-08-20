# parsing

`_ZN13ExceptionItem7parsingEPc`

`ExceptionItem::parsing(char*)`

| 类 | 地址 |
|---|---|
| `ExceptionItem` | `0x081a1fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a1fce  _ZN13ExceptionItem7parsingEPc
#           ExceptionItem::parsing(char*)
# range [0x081a1fce, 0x081a210b]
081a1fce +0x000:  push   %ebp
081a1fcf +0x001:  mov    %esp,%ebp
081a1fd1 +0x003:  push   %esi
081a1fd2 +0x004:  push   %ebx
081a1fd3 +0x005:  sub    $0x90,%esp
081a1fd9 +0x00b:  lea    -0x7c(%ebp),%eax
081a1fdc +0x00e:  mov    %eax,(%esp)
081a1fdf +0x011:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a1fe4 +0x016:  movl   $"material_exception_item",0x8(%esp)
081a1fec +0x01e:  mov    0xc(%ebp),%eax
081a1fef +0x021:  mov    %eax,0x4(%esp)
081a1ff3 +0x025:  lea    -0x7c(%ebp),%eax
081a1ff6 +0x028:  mov    %eax,(%esp)
081a1ff9 +0x02b:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a1ffe +0x030:  xor    $0x1,%eax
081a2001 +0x033:  test   %al,%al
081a2003 +0x035:  je     081a200f <+0x41>
081a2005 +0x037:  mov    $0x27,%ebx
081a200a +0x03c:  jmp    081a20f4 <+0x126>
081a200f +0x041:  lea    -0x7c(%ebp),%eax
081a2012 +0x044:  mov    %eax,(%esp)
081a2015 +0x047:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a201a +0x04c:  test   %eax,%eax
081a201c +0x04e:  sete   %al
081a201f +0x051:  test   %al,%al
081a2021 +0x053:  je     081a202d <+0x5f>
081a2023 +0x055:  mov    $0x2a,%ebx
081a2028 +0x05a:  jmp    081a20f4 <+0x126>
081a202d +0x05f:  movl   $0x0,-0xc(%ebp)
081a2034 +0x066:  jmp    081a20b9 <+0xeb>
081a2039 +0x06b:  movl   $"material_exception_item_index",0x8(%esp)
081a2041 +0x073:  mov    -0xc(%ebp),%eax
081a2044 +0x076:  mov    %eax,0x4(%esp)
081a2048 +0x07a:  lea    -0x7c(%ebp),%eax
081a204b +0x07d:  mov    %eax,(%esp)
081a204e +0x080:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a2053 +0x085:  mov    %eax,-0x20(%ebp)
081a2056 +0x088:  lea    -0x14(%ebp),%eax
081a2059 +0x08b:  lea    -0x20(%ebp),%edx
081a205c +0x08e:  mov    %edx,0x8(%esp)
081a2060 +0x092:  lea    -0x20(%ebp),%edx
081a2063 +0x095:  mov    %edx,0x4(%esp)
081a2067 +0x099:  mov    %eax,(%esp)
081a206a +0x09c:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
081a206f +0x0a1:  sub    $0x4,%esp
081a2072 +0x0a4:  lea    -0x14(%ebp),%eax
081a2075 +0x0a7:  mov    %eax,0x4(%esp)
081a2079 +0x0ab:  lea    -0x1c(%ebp),%eax
081a207c +0x0ae:  mov    %eax,(%esp)
081a207f +0x0b1:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
081a2084 +0x0b6:  mov    0x8(%ebp),%eax
081a2087 +0x0b9:  lea    0x4(%eax),%ecx
081a208a +0x0bc:  lea    -0x28(%ebp),%eax
081a208d +0x0bf:  lea    -0x1c(%ebp),%edx
081a2090 +0x0c2:  mov    %edx,0x8(%esp)
081a2094 +0x0c6:  mov    %ecx,0x4(%esp)
081a2098 +0x0ca:  mov    %eax,(%esp)
081a209b +0x0cd:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
081a20a0 +0x0d2:  sub    $0x4,%esp
081a20a3 +0x0d5:  movzbl -0x24(%ebp),%eax
081a20a7 +0x0d9:  xor    $0x1,%eax
081a20aa +0x0dc:  test   %al,%al
081a20ac +0x0de:  je     081a20b5 <+0xe7>
081a20ae +0x0e0:  mov    $0x33,%ebx
081a20b3 +0x0e5:  jmp    081a20f4 <+0x126>
081a20b5 +0x0e7:  addl   $0x1,-0xc(%ebp)
081a20b9 +0x0eb:  lea    -0x7c(%ebp),%eax
081a20bc +0x0ee:  mov    %eax,(%esp)
081a20bf +0x0f1:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a20c4 +0x0f6:  cmp    -0xc(%ebp),%eax
081a20c7 +0x0f9:  setg   %al
081a20ca +0x0fc:  test   %al,%al
081a20cc +0x0fe:  jne    081a2039 <+0x6b>
081a20d2 +0x104:  mov    $0x0,%ebx
081a20d7 +0x109:  jmp    081a20f4 <+0x126>
081a20d9 +0x10b:  mov    %edx,%ebx
081a20db +0x10d:  mov    %eax,%esi
081a20dd +0x10f:  lea    -0x7c(%ebp),%eax
081a20e0 +0x112:  mov    %eax,(%esp)
081a20e3 +0x115:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a20e8 +0x11a:  mov    %esi,%eax
081a20ea +0x11c:  mov    %ebx,%edx
081a20ec +0x11e:  mov    %eax,(%esp)
081a20ef +0x121:  call   08ae3750 <_Unwind_Resume>
081a20f4 +0x126:  lea    -0x7c(%ebp),%eax
081a20f7 +0x129:  mov    %eax,(%esp)
081a20fa +0x12c:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a20ff +0x131:  mov    %ebx,%eax
081a2101 +0x133:  lea    -0x8(%ebp),%esp
081a2104 +0x136:  add    $0x0,%esp
081a2107 +0x139:  pop    %ebx
081a2108 +0x13a:  pop    %esi
081a2109 +0x13b:  pop    %ebp
081a210a +0x13c:  ret
081a210b +0x13d:  nop
```

## 反编译 C

```c
// ExceptionItem::parsing @ 0x81a1fce

/* ExceptionItem::parsing(char*) */

undefined4 __thiscall ExceptionItem::parsing(ExceptionItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_80 [84];
  pair local_2c [4];
  char local_28;
  int local_24;
  pair<int_const,int> local_20 [8];
  int local_18 [2];
  int local_10;
  
  Arad_Script::Arad_Script(local_80);
                    /* try { // try from 081a1ff9 to 081a209f has its CatchHandler @ 081a20d9 */
  cVar1 = Arad_Script::Load(local_80,param_1,"material_exception_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_80);
    if (iVar2 == 0) {
      uVar3 = 0x2a;
    }
    else {
      local_10 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_80);
        if (iVar2 <= local_10) break;
        local_24 = Arad_Script::GetInt(local_80,local_10,"material_exception_item_index");
        std::make_pair<int&,int&>(local_18,&local_24);
        std::pair<int_const,int>::pair<int,int>(local_20,(pair *)local_18);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
        if (local_28 != '\x01') {
          uVar3 = 0x33;
          goto LAB_081a20f4;
        }
        local_10 = local_10 + 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x27;
  }
LAB_081a20f4:
  Arad_Script::~Arad_Script(local_80);
  return uVar3;
}
```
