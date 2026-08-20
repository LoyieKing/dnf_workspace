# arad_sp_create_inven

`_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b2b7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b2b7  _ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b2b7, 0x0818b405]
0818b2b7 +0x000:  push   %ebp
0818b2b8 +0x001:  mov    %esp,%ebp
0818b2ba +0x003:  push   %esi
0818b2bb +0x004:  push   %ebx
0818b2bc +0x005:  sub    $0x4180,%esp
0818b2c2 +0x00b:  lea    -0x4162(%ebp),%eax
0818b2c8 +0x011:  mov    $0x4152,%edx
0818b2cd +0x016:  mov    %edx,0x8(%esp)
0818b2d1 +0x01a:  movl   $0x0,0x4(%esp)
0818b2d9 +0x022:  mov    %eax,(%esp)
0818b2dc +0x025:  call   0807dcc0 <_init+0x5b8>
0818b2e1 +0x02a:  movl   $0x4152,-0x10(%ebp)
0818b2e8 +0x031:  mov    0xc(%ebp),%eax
0818b2eb +0x034:  add    $0x3a9,%eax
0818b2f0 +0x039:  mov    %eax,-0xc(%ebp)
0818b2f3 +0x03c:  mov    0xc(%ebp),%eax
0818b2f6 +0x03f:  movzbl 0x533f(%eax),%eax
0818b2fd +0x046:  test   %al,%al
0818b2ff +0x048:  je     0818b3c2 <+0x10b>
0818b305 +0x04e:  mov    -0xc(%ebp),%eax
0818b308 +0x051:  movl   $0x3b55,0xc(%esp)
0818b310 +0x059:  mov    %eax,0x8(%esp)
0818b314 +0x05d:  lea    -0x10(%ebp),%eax
0818b317 +0x060:  mov    %eax,0x4(%esp)
0818b31b +0x064:  lea    -0x4162(%ebp),%eax
0818b321 +0x06a:  mov    %eax,(%esp)
0818b324 +0x06d:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0818b329 +0x072:  test   %al,%al
0818b32b +0x074:  je     0818b337 <+0x80>
0818b32d +0x076:  mov    $0xffffffff,%eax
0818b332 +0x07b:  jmp    0818b3fc <+0x145>
0818b337 +0x080:  call   0848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>  ; WongWork::CEventMgr::GetCoinCharacCreate()
0818b33c +0x085:  mov    %eax,%esi
0818b33e +0x087:  movl   $0x3b55,0xc(%esp)
0818b346 +0x08f:  mov    -0xc(%ebp),%eax
0818b349 +0x092:  mov    %eax,0x8(%esp)
0818b34d +0x096:  movl   $0x0,0x4(%esp)
0818b355 +0x09e:  mov    0x8(%ebp),%eax
0818b358 +0x0a1:  mov    %eax,(%esp)
0818b35b +0x0a4:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0818b360 +0x0a9:  mov    %eax,%ebx
0818b362 +0x0ab:  mov    -0x10(%ebp),%eax
0818b365 +0x0ae:  mov    %eax,0xc(%esp)
0818b369 +0x0b2:  lea    -0x4162(%ebp),%eax
0818b36f +0x0b8:  mov    %eax,0x8(%esp)
0818b373 +0x0bc:  movl   $0x0,0x4(%esp)
0818b37b +0x0c4:  mov    0x8(%ebp),%eax
0818b37e +0x0c7:  mov    %eax,(%esp)
0818b381 +0x0ca:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0818b386 +0x0cf:  mov    0xc(%ebp),%edx
0818b389 +0x0d2:  mov    0x5348(%edx),%edx
0818b38f +0x0d8:  mov    %esi,0x14(%esp)
0818b393 +0x0dc:  mov    %ebx,0x10(%esp)
0818b397 +0x0e0:  mov    %eax,0xc(%esp)
0818b39b +0x0e4:  mov    %edx,0x8(%esp)
0818b39f +0x0e8:  movl   $"inSert into inventory (charac_no, inventory,coin) values(%u, '%s',%d)",0x4(%esp)
0818b3a7 +0x0f0:  mov    0x8(%ebp),%eax
0818b3aa +0x0f3:  mov    %eax,(%esp)
0818b3ad +0x0f6:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b3b2 +0x0fb:  test   %eax,%eax
0818b3b4 +0x0fd:  setne  %al
0818b3b7 +0x100:  test   %al,%al
0818b3b9 +0x102:  je     0818b3f7 <+0x140>
0818b3bb +0x104:  mov    $0xffffffff,%eax
0818b3c0 +0x109:  jmp    0818b3fc <+0x145>
0818b3c2 +0x10b:  mov    0xc(%ebp),%eax
0818b3c5 +0x10e:  mov    0x5348(%eax),%eax
0818b3cb +0x114:  mov    %eax,0x8(%esp)
0818b3cf +0x118:  movl   $"inSert into inventory  (charac_no, coin, money)  values(%u, %d) ",0x4(%esp)
0818b3d7 +0x120:  mov    0x8(%ebp),%eax
0818b3da +0x123:  mov    %eax,(%esp)
0818b3dd +0x126:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b3e2 +0x12b:  call   0848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>  ; WongWork::CEventMgr::GetCoinCharacCreate()
0818b3e7 +0x130:  test   %eax,%eax
0818b3e9 +0x132:  setne  %al
0818b3ec +0x135:  test   %al,%al
0818b3ee +0x137:  je     0818b3f7 <+0x140>
0818b3f0 +0x139:  mov    $0xffffffff,%eax
0818b3f5 +0x13e:  jmp    0818b3fc <+0x145>
0818b3f7 +0x140:  mov    $0x0,%eax
0818b3fc +0x145:  add    $0x4180,%esp
0818b402 +0x14b:  pop    %ebx
0818b403 +0x14c:  pop    %esi
0818b404 +0x14d:  pop    %ebp
0818b405 +0x14e:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven @ 0x818b2b7

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char local_4166 [16722];
  uint local_14;
  SIG_CREATE_CHARAC *local_10;
  
  memset(local_4166,0,0x4152);
  local_14 = 0x4152;
  local_10 = param_2 + 0x3a9;
  if (param_2[0x533f] == (SIG_CREATE_CHARAC)0x0) {
    MySQL::insert(param_1,"inSert into inventory  (charac_no, coin, money)  values(%u, %d) ",
                  *(undefined4 *)(param_2 + 0x5348));
    iVar5 = WongWork::CEventMgr::GetCoinCharacCreate();
    if (iVar5 != 0) {
      return 0xffffffff;
    }
  }
  else {
    cVar1 = compress_zip(local_4166,&local_14,(char *)local_10,0x3b55);
    if (cVar1 != '\0') {
      return 0xffffffff;
    }
    uVar2 = WongWork::CEventMgr::GetCoinCharacCreate();
    uVar3 = MySQL::blob_to_str(param_1,0,local_10,0x3b55);
    uVar4 = MySQL::blob_to_str(param_1,0,local_4166,local_14);
    iVar5 = MySQL::insert(param_1,
                          "inSert into inventory (charac_no, inventory,coin) values(%u, \'%s\',%d)",
                          *(undefined4 *)(param_2 + 0x5348),uVar4,uVar3,uVar2);
    if (iVar5 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}
```
