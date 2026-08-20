# LoadAveragePrice

`_ZN20CAuctionAveragePrice16LoadAveragePriceEv`

`CAuctionAveragePrice::LoadAveragePrice()`

| 类 | 地址 |
|---|---|
| `CAuctionAveragePrice` | `0x082f5aa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f5aa8  _ZN20CAuctionAveragePrice16LoadAveragePriceEv
#           CAuctionAveragePrice::LoadAveragePrice()
# range [0x082f5aa8, 0x082f5c23]
082f5aa8 +0x000:  push   %ebp
082f5aa9 +0x001:  mov    %esp,%ebp
082f5aab +0x003:  sub    $0x38,%esp
082f5aae +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
082f5ab3 +0x00b:  movl   $0x0,0x8(%esp)
082f5abb +0x013:  movl   $0xc,0x4(%esp)
082f5ac3 +0x01b:  mov    %eax,(%esp)
082f5ac6 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
082f5acb +0x023:  mov    %eax,-0x14(%ebp)
082f5ace +0x026:  movl   $"seLect item_id,upgrade,average_price from auction_average_price",0x4(%esp)
082f5ad6 +0x02e:  mov    -0x14(%ebp),%eax
082f5ad9 +0x031:  mov    %eax,(%esp)
082f5adc +0x034:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
082f5ae1 +0x039:  movl   $0x1,0x4(%esp)
082f5ae9 +0x041:  mov    -0x14(%ebp),%eax
082f5aec +0x044:  mov    %eax,(%esp)
082f5aef +0x047:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
082f5af4 +0x04c:  xor    $0x1,%eax
082f5af7 +0x04f:  test   %al,%al
082f5af9 +0x051:  je     082f5b05 <+0x5d>
082f5afb +0x053:  mov    $0x0,%eax
082f5b00 +0x058:  jmp    082f5c22 <+0x17a>
082f5b05 +0x05d:  mov    -0x14(%ebp),%eax
082f5b08 +0x060:  mov    %eax,(%esp)
082f5b0b +0x063:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
082f5b10 +0x068:  test   %eax,%eax
082f5b12 +0x06a:  sete   %al
082f5b15 +0x06d:  test   %al,%al
082f5b17 +0x06f:  je     082f5b23 <+0x7b>
082f5b19 +0x071:  mov    $0x1,%eax
082f5b1e +0x076:  jmp    082f5c22 <+0x17a>
082f5b23 +0x07b:  movl   $0x0,-0x18(%ebp)
082f5b2a +0x082:  movl   $0x0,-0x1c(%ebp)
082f5b31 +0x089:  movb   $0x0,-0x1d(%ebp)
082f5b35 +0x08d:  movb   $0x0,-0xd(%ebp)
082f5b39 +0x091:  movl   $0x0,-0xc(%ebp)
082f5b40 +0x098:  jmp    082f5c04 <+0x15c>
082f5b45 +0x09d:  mov    -0x14(%ebp),%eax
082f5b48 +0x0a0:  mov    %eax,(%esp)
082f5b4b +0x0a3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
082f5b50 +0x0a8:  xor    $0x1,%eax
082f5b53 +0x0ab:  test   %al,%al
082f5b55 +0x0ad:  je     082f5b61 <+0xb9>
082f5b57 +0x0af:  mov    $0x0,%eax
082f5b5c +0x0b4:  jmp    082f5c22 <+0x17a>
082f5b61 +0x0b9:  lea    -0x18(%ebp),%eax
082f5b64 +0x0bc:  mov    %eax,0x8(%esp)
082f5b68 +0x0c0:  movl   $0x0,0x4(%esp)
082f5b70 +0x0c8:  mov    -0x14(%ebp),%eax
082f5b73 +0x0cb:  mov    %eax,(%esp)
082f5b76 +0x0ce:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
082f5b7b +0x0d3:  xor    $0x1,%eax
082f5b7e +0x0d6:  test   %al,%al
082f5b80 +0x0d8:  je     082f5b8c <+0xe4>
082f5b82 +0x0da:  mov    $0x0,%eax
082f5b87 +0x0df:  jmp    082f5c22 <+0x17a>
082f5b8c +0x0e4:  lea    -0x1d(%ebp),%eax
082f5b8f +0x0e7:  mov    %eax,0x8(%esp)
082f5b93 +0x0eb:  movl   $0x1,0x4(%esp)
082f5b9b +0x0f3:  mov    -0x14(%ebp),%eax
082f5b9e +0x0f6:  mov    %eax,(%esp)
082f5ba1 +0x0f9:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
082f5ba6 +0x0fe:  xor    $0x1,%eax
082f5ba9 +0x101:  test   %al,%al
082f5bab +0x103:  je     082f5bb4 <+0x10c>
082f5bad +0x105:  mov    $0x0,%eax
082f5bb2 +0x10a:  jmp    082f5c22 <+0x17a>
082f5bb4 +0x10c:  lea    -0x1c(%ebp),%eax
082f5bb7 +0x10f:  mov    %eax,0x8(%esp)
082f5bbb +0x113:  movl   $0x2,0x4(%esp)
082f5bc3 +0x11b:  mov    -0x14(%ebp),%eax
082f5bc6 +0x11e:  mov    %eax,(%esp)
082f5bc9 +0x121:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
082f5bce +0x126:  xor    $0x1,%eax
082f5bd1 +0x129:  test   %al,%al
082f5bd3 +0x12b:  je     082f5bdc <+0x134>
082f5bd5 +0x12d:  mov    $0x0,%eax
082f5bda +0x132:  jmp    082f5c22 <+0x17a>
082f5bdc +0x134:  mov    -0x1c(%ebp),%ecx
082f5bdf +0x137:  movzbl -0x1d(%ebp),%eax
082f5be3 +0x13b:  movzbl %al,%edx
082f5be6 +0x13e:  mov    -0x18(%ebp),%eax
082f5be9 +0x141:  mov    %ecx,0xc(%esp)
082f5bed +0x145:  mov    %edx,0x8(%esp)
082f5bf1 +0x149:  mov    %eax,0x4(%esp)
082f5bf5 +0x14d:  mov    0x8(%ebp),%eax
082f5bf8 +0x150:  mov    %eax,(%esp)
082f5bfb +0x153:  call   082f5c24 <_ZN20CAuctionAveragePrice15SetAveragePriceEihi>  ; CAuctionAveragePrice::SetAveragePrice(int, unsigned char, int)
082f5c00 +0x158:  addl   $0x1,-0xc(%ebp)
082f5c04 +0x15c:  mov    -0x14(%ebp),%eax
082f5c07 +0x15f:  mov    %eax,(%esp)
082f5c0a +0x162:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
082f5c0f +0x167:  cmp    -0xc(%ebp),%eax
082f5c12 +0x16a:  seta   %al
082f5c15 +0x16d:  test   %al,%al
082f5c17 +0x16f:  jne    082f5b45 <+0x9d>
082f5c1d +0x175:  mov    $0x1,%eax
082f5c22 +0x17a:  leave
082f5c23 +0x17b:  ret
```

## 反编译 C

```c
// CAuctionAveragePrice::LoadAveragePrice @ 0x82f5aa8

/* CAuctionAveragePrice::LoadAveragePrice() */

undefined4 __thiscall CAuctionAveragePrice::LoadAveragePrice(CAuctionAveragePrice *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte local_21;
  int local_20 [2];
  MySQL *local_18;
  undefined1 local_11;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xc,0);
  MySQL::set_query(local_18,"seLect item_id,upgrade,average_price from auction_average_price");
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      local_20[1] = 0;
      local_20[0] = 0;
      local_21 = 0;
      local_11 = 0;
      local_10 = 0;
      while (uVar4 = MySQL::get_n_rows(local_18), local_10 < uVar4) {
        cVar1 = MySQL::fetch(local_18);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(local_18,0,local_20 + 1);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_ubyte(local_18,1,&local_21);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(local_18,2,local_20);
        if (cVar1 != '\x01') {
          return 0;
        }
        SetAveragePrice((int)this,(uchar)local_20[1],(uint)local_21);
        local_10 = local_10 + 1;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
