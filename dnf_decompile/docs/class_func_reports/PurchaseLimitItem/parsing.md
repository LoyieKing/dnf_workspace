# parsing

`_ZN17PurchaseLimitItem7parsingEPc`

`PurchaseLimitItem::parsing(char*)`

| 类 | 地址 |
|---|---|
| `PurchaseLimitItem` | `0x081a216e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a216e  _ZN17PurchaseLimitItem7parsingEPc
#           PurchaseLimitItem::parsing(char*)
# range [0x081a216e, 0x081a230f]
081a216e +0x000:  push   %ebp
081a216f +0x001:  mov    %esp,%ebp
081a2171 +0x003:  push   %esi
081a2172 +0x004:  push   %ebx
081a2173 +0x005:  sub    $0x90,%esp
081a2179 +0x00b:  lea    -0x88(%ebp),%eax
081a217f +0x011:  mov    %eax,(%esp)
081a2182 +0x014:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a2187 +0x019:  movl   $"purchase_limit_item",0x8(%esp)
081a218f +0x021:  mov    0xc(%ebp),%eax
081a2192 +0x024:  mov    %eax,0x4(%esp)
081a2196 +0x028:  lea    -0x88(%ebp),%eax
081a219c +0x02e:  mov    %eax,(%esp)
081a219f +0x031:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a21a4 +0x036:  xor    $0x1,%eax
081a21a7 +0x039:  test   %al,%al
081a21a9 +0x03b:  je     081a21b5 <+0x47>
081a21ab +0x03d:  mov    $0x4c,%ebx
081a21b0 +0x042:  jmp    081a22f6 <+0x188>
081a21b5 +0x047:  lea    -0x88(%ebp),%eax
081a21bb +0x04d:  mov    %eax,(%esp)
081a21be +0x050:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a21c3 +0x055:  test   %eax,%eax
081a21c5 +0x057:  sete   %al
081a21c8 +0x05a:  test   %al,%al
081a21ca +0x05c:  je     081a21d6 <+0x68>
081a21cc +0x05e:  mov    $0x4f,%ebx
081a21d1 +0x063:  jmp    081a22f6 <+0x188>
081a21d6 +0x068:  lea    -0x2c(%ebp),%eax
081a21d9 +0x06b:  mov    %eax,(%esp)
081a21dc +0x06e:  call   081a405e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb9>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb9
081a21e1 +0x073:  movl   $0x0,-0xc(%ebp)
081a21e8 +0x07a:  jmp    081a22b5 <+0x147>
081a21ed +0x07f:  movl   $"Item_Index",0x8(%esp)
081a21f5 +0x087:  mov    -0xc(%ebp),%eax
081a21f8 +0x08a:  mov    %eax,0x4(%esp)
081a21fc +0x08e:  lea    -0x88(%ebp),%eax
081a2202 +0x094:  mov    %eax,(%esp)
081a2205 +0x097:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a220a +0x09c:  mov    %eax,-0x28(%ebp)
081a220d +0x09f:  movl   $"purchase_Type",0x8(%esp)
081a2215 +0x0a7:  mov    -0xc(%ebp),%eax
081a2218 +0x0aa:  mov    %eax,0x4(%esp)
081a221c +0x0ae:  lea    -0x88(%ebp),%eax
081a2222 +0x0b4:  mov    %eax,(%esp)
081a2225 +0x0b7:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a222a +0x0bc:  mov    %ax,-0x2c(%ebp)
081a222e +0x0c0:  movl   $"puchase_limit_count",0x8(%esp)
081a2236 +0x0c8:  mov    -0xc(%ebp),%eax
081a2239 +0x0cb:  mov    %eax,0x4(%esp)
081a223d +0x0cf:  lea    -0x88(%ebp),%eax
081a2243 +0x0d5:  mov    %eax,(%esp)
081a2246 +0x0d8:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a224b +0x0dd:  mov    %ax,-0x2a(%ebp)
081a224f +0x0e1:  lea    -0x18(%ebp),%eax
081a2252 +0x0e4:  lea    -0x2c(%ebp),%edx
081a2255 +0x0e7:  mov    %edx,0x8(%esp)
081a2259 +0x0eb:  lea    -0x2c(%ebp),%edx
081a225c +0x0ee:  add    $0x4,%edx
081a225f +0x0f1:  mov    %edx,0x4(%esp)
081a2263 +0x0f5:  mov    %eax,(%esp)
081a2266 +0x0f8:  call   081a42fe <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x359>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x359
081a226b +0x0fd:  sub    $0x4,%esp
081a226e +0x100:  lea    -0x18(%ebp),%eax
081a2271 +0x103:  mov    %eax,0x4(%esp)
081a2275 +0x107:  lea    -0x24(%ebp),%eax
081a2278 +0x10a:  mov    %eax,(%esp)
081a227b +0x10d:  call   081a433c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x397>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x397
081a2280 +0x112:  mov    0x8(%ebp),%eax
081a2283 +0x115:  lea    0x4(%eax),%ecx
081a2286 +0x118:  lea    -0x34(%ebp),%eax
081a2289 +0x11b:  lea    -0x24(%ebp),%edx
081a228c +0x11e:  mov    %edx,0x8(%esp)
081a2290 +0x122:  mov    %ecx,0x4(%esp)
081a2294 +0x126:  mov    %eax,(%esp)
081a2297 +0x129:  call   081a4372 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x3cd>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x3cd
081a229c +0x12e:  sub    $0x4,%esp
081a229f +0x131:  movzbl -0x30(%ebp),%eax
081a22a3 +0x135:  xor    $0x1,%eax
081a22a6 +0x138:  test   %al,%al
081a22a8 +0x13a:  je     081a22b1 <+0x143>
081a22aa +0x13c:  mov    $0x5c,%ebx
081a22af +0x141:  jmp    081a22f6 <+0x188>
081a22b1 +0x143:  addl   $0x1,-0xc(%ebp)
081a22b5 +0x147:  lea    -0x88(%ebp),%eax
081a22bb +0x14d:  mov    %eax,(%esp)
081a22be +0x150:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a22c3 +0x155:  cmp    -0xc(%ebp),%eax
081a22c6 +0x158:  setg   %al
081a22c9 +0x15b:  test   %al,%al
081a22cb +0x15d:  jne    081a21ed <+0x7f>
081a22d1 +0x163:  mov    $0x0,%ebx
081a22d6 +0x168:  jmp    081a22f6 <+0x188>
081a22d8 +0x16a:  mov    %edx,%ebx
081a22da +0x16c:  mov    %eax,%esi
081a22dc +0x16e:  lea    -0x88(%ebp),%eax
081a22e2 +0x174:  mov    %eax,(%esp)
081a22e5 +0x177:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a22ea +0x17c:  mov    %esi,%eax
081a22ec +0x17e:  mov    %ebx,%edx
081a22ee +0x180:  mov    %eax,(%esp)
081a22f1 +0x183:  call   08ae3750 <_Unwind_Resume>
081a22f6 +0x188:  lea    -0x88(%ebp),%eax
081a22fc +0x18e:  mov    %eax,(%esp)
081a22ff +0x191:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a2304 +0x196:  mov    %ebx,%eax
081a2306 +0x198:  lea    -0x8(%ebp),%esp
081a2309 +0x19b:  add    $0x0,%esp
081a230c +0x19e:  pop    %ebx
081a230d +0x19f:  pop    %esi
081a230e +0x1a0:  pop    %ebp
081a230f +0x1a1:  ret
```

## 反编译 C

```c
// PurchaseLimitItem::parsing @ 0x81a216e

/* PurchaseLimitItem::parsing(char*) */

undefined4 __thiscall PurchaseLimitItem::parsing(PurchaseLimitItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_8c [84];
  pair local_38 [4];
  char local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  pair<unsigned_int_const,PurchaseLimitItem::Info> local_28 [12];
  uint local_1c [3];
  int local_10;
  
  Arad_Script::Arad_Script(local_8c);
                    /* try { // try from 081a219f to 081a229b has its CatchHandler @ 081a22d8 */
  cVar1 = Arad_Script::Load(local_8c,param_1,"purchase_limit_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_8c);
    if (iVar2 == 0) {
      uVar3 = 0x4f;
    }
    else {
      Info::Info((Info *)&local_30);
      local_10 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_8c);
        if (iVar2 <= local_10) break;
        local_2c = Arad_Script::GetInt(local_8c,local_10,"Item_Index");
        local_30 = Arad_Script::GetInt(local_8c,local_10,"purchase_Type");
        local_2e = Arad_Script::GetInt(local_8c,local_10,"puchase_limit_count");
        std::make_pair<unsigned_int&,PurchaseLimitItem::Info&>(local_1c,(Info *)&local_2c);
        std::pair<unsigned_int_const,PurchaseLimitItem::Info>::
        pair<unsigned_int,PurchaseLimitItem::Info>(local_28,(pair *)local_1c);
        std::
        map<unsigned_int,PurchaseLimitItem::Info,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,PurchaseLimitItem::Info>>>
        ::insert(local_38);
        if (local_34 != '\x01') {
          uVar3 = 0x5c;
          goto LAB_081a22f6;
        }
        local_10 = local_10 + 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x4c;
  }
LAB_081a22f6:
  Arad_Script::~Arad_Script(local_8c);
  return uVar3;
}
```
