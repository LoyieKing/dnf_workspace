# CreateInventory

`_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item`

`DB_CreateCharac::CreateInventory(unsigned int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08402230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402230  _ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item
#           DB_CreateCharac::CreateInventory(unsigned int, Inven_Item*)
# range [0x08402230, 0x084023ab]
08402230 +0x000:  push   %ebp
08402231 +0x001:  mov    %esp,%ebp
08402233 +0x003:  push   %ebx
08402234 +0x004:  sub    $0x4774,%esp
0840223a +0x00a:  lea    -0x4752(%ebp),%eax
08402240 +0x010:  mov    $0x473e,%edx
08402245 +0x015:  mov    %edx,0x8(%esp)
08402249 +0x019:  movl   $0x0,0x4(%esp)
08402251 +0x021:  mov    %eax,(%esp)
08402254 +0x024:  call   0807dcc0 <_init+0x5b8>
08402259 +0x029:  movl   $0x473e,-0x14(%ebp)
08402260 +0x030:  cmpl   $0x0,0x10(%ebp)
08402264 +0x034:  je     0840229b <+0x6b>
08402266 +0x036:  mov    0x10(%ebp),%eax
08402269 +0x039:  movl   $0x3b55,0xc(%esp)
08402271 +0x041:  mov    %eax,0x8(%esp)
08402275 +0x045:  lea    -0x14(%ebp),%eax
08402278 +0x048:  mov    %eax,0x4(%esp)
0840227c +0x04c:  lea    -0x4752(%ebp),%eax
08402282 +0x052:  mov    %eax,(%esp)
08402285 +0x055:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840228a +0x05a:  xor    $0x1,%eax
0840228d +0x05d:  test   %al,%al
0840228f +0x05f:  je     0840229b <+0x6b>
08402291 +0x061:  mov    $0x0,%eax
08402296 +0x066:  jmp    084023a2 <+0x172>
0840229b +0x06b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084022a0 +0x070:  movl   $0x0,0x8(%esp)
084022a8 +0x078:  movl   $0x3,0x4(%esp)
084022b0 +0x080:  mov    %eax,(%esp)
084022b3 +0x083:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084022b8 +0x088:  mov    %eax,-0xc(%ebp)
084022bb +0x08b:  cmpl   $0x0,0x10(%ebp)
084022bf +0x08f:  jne    084022e6 <+0xb6>
084022c1 +0x091:  call   0848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>  ; WongWork::CEventMgr::GetCoinCharacCreate()
084022c6 +0x096:  mov    %eax,0xc(%esp)
084022ca +0x09a:  mov    0xc(%ebp),%eax
084022cd +0x09d:  mov    %eax,0x8(%esp)
084022d1 +0x0a1:  movl   $"inSert into inventory (charac_no, coin) values(%u, %d)",0x4(%esp)
084022d9 +0x0a9:  mov    -0xc(%ebp),%eax
084022dc +0x0ac:  mov    %eax,(%esp)
084022df +0x0af:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084022e4 +0x0b4:  jmp    08402333 <+0x103>
084022e6 +0x0b6:  call   0848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>  ; WongWork::CEventMgr::GetCoinCharacCreate()
084022eb +0x0bb:  mov    %eax,%ebx
084022ed +0x0bd:  mov    -0x14(%ebp),%eax
084022f0 +0x0c0:  mov    %eax,0xc(%esp)
084022f4 +0x0c4:  lea    -0x4752(%ebp),%eax
084022fa +0x0ca:  mov    %eax,0x8(%esp)
084022fe +0x0ce:  movl   $0x0,0x4(%esp)
08402306 +0x0d6:  mov    -0xc(%ebp),%eax
08402309 +0x0d9:  mov    %eax,(%esp)
0840230c +0x0dc:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08402311 +0x0e1:  mov    %ebx,0x10(%esp)
08402315 +0x0e5:  mov    %eax,0xc(%esp)
08402319 +0x0e9:  mov    0xc(%ebp),%eax
0840231c +0x0ec:  mov    %eax,0x8(%esp)
08402320 +0x0f0:  movl   $"inSert into inventory (charac_no, inventory,coin) values(%u, '%s',%d)",0x4(%esp)
08402328 +0x0f8:  mov    -0xc(%ebp),%eax
0840232b +0x0fb:  mov    %eax,(%esp)
0840232e +0x0fe:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08402333 +0x103:  movl   $0x1,0x4(%esp)
0840233b +0x10b:  mov    -0xc(%ebp),%eax
0840233e +0x10e:  mov    %eax,(%esp)
08402341 +0x111:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08402346 +0x116:  mov    %al,-0xd(%ebp)
08402349 +0x119:  movzbl -0xd(%ebp),%eax
0840234d +0x11d:  xor    $0x1,%eax
08402350 +0x120:  test   %al,%al
08402352 +0x122:  je     0840235b <+0x12b>
08402354 +0x124:  mov    $0x0,%eax
08402359 +0x129:  jmp    084023a2 <+0x172>
0840235b +0x12b:  mov    0xc(%ebp),%eax
0840235e +0x12e:  mov    %eax,0x8(%esp)
08402362 +0x132:  movl   $"inSert into charac_inven_expand(charac_no,cargo,cargo_capacity,jewel) values(%u,'',0,'')",0x4(%esp)
0840236a +0x13a:  mov    -0xc(%ebp),%eax
0840236d +0x13d:  mov    %eax,(%esp)
08402370 +0x140:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08402375 +0x145:  movl   $0x1,0x4(%esp)
0840237d +0x14d:  mov    -0xc(%ebp),%eax
08402380 +0x150:  mov    %eax,(%esp)
08402383 +0x153:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08402388 +0x158:  mov    %al,-0xd(%ebp)
0840238b +0x15b:  movzbl -0xd(%ebp),%eax
0840238f +0x15f:  xor    $0x1,%eax
08402392 +0x162:  test   %al,%al
08402394 +0x164:  je     0840239d <+0x16d>
08402396 +0x166:  mov    $0x0,%eax
0840239b +0x16b:  jmp    084023a2 <+0x172>
0840239d +0x16d:  mov    $0x1,%eax
084023a2 +0x172:  add    $0x4774,%esp
084023a8 +0x178:  pop    %ebx
084023a9 +0x179:  pop    %ebp
084023aa +0x17a:  ret
084023ab +0x17b:  nop
```

## 反编译 C

```c
// DB_CreateCharac::CreateInventory @ 0x8402230

/* DB_CreateCharac::CreateInventory(unsigned int, Inven_Item*) */

undefined4 __thiscall
DB_CreateCharac::CreateInventory(DB_CreateCharac *this,uint param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_4756 [18238];
  uint local_18;
  char local_11;
  MySQL *local_10;
  
  memset(local_4756,0,0x473e);
  local_18 = 0x473e;
  if ((param_2 != (Inven_Item *)0x0) &&
     (cVar1 = compress_zip(local_4756,&local_18,(char *)param_2,0x3b55), cVar1 != '\x01')) {
    return 0;
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_2 == (Inven_Item *)0x0) {
    uVar2 = WongWork::CEventMgr::GetCoinCharacCreate();
    MySQL::set_query(local_10,"inSert into inventory (charac_no, coin) values(%u, %d)",param_1,uVar2
                    );
  }
  else {
    uVar3 = WongWork::CEventMgr::GetCoinCharacCreate();
    uVar2 = MySQL::blob_to_str(local_10,0,local_4756,local_18);
    MySQL::set_query(local_10,
                     "inSert into inventory (charac_no, inventory,coin) values(%u, \'%s\',%d)",
                     param_1,uVar2,uVar3);
  }
  local_11 = MySQL::exec(local_10,true);
  if (local_11 == '\x01') {
    MySQL::set_query(local_10,
                     "inSert into charac_inven_expand(charac_no,cargo,cargo_capacity,jewel) values(%u,\'\',0,\'\')"
                     ,param_1,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
