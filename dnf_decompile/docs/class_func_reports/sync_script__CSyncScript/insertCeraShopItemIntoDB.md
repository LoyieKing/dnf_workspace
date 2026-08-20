# insertCeraShopItemIntoDB

`_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_`

`sync_script::CSyncScript::insertCeraShopItemIntoDB(unsigned int, unsigned int, int, int, short, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622abc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622abc  _ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_
#           sync_script::CSyncScript::insertCeraShopItemIntoDB(unsigned int, unsigned int, int, int, short, char const*, char const*)
# range [0x08622abc, 0x08622c65]
08622abc +0x000:  push   %ebp
08622abd +0x001:  mov    %esp,%ebp
08622abf +0x003:  push   %edi
08622ac0 +0x004:  push   %ebx
08622ac1 +0x005:  sub    $0x140,%esp
08622ac7 +0x00b:  mov    0x1c(%ebp),%eax
08622aca +0x00e:  mov    %ax,-0x11c(%ebp)
08622ad1 +0x015:  mov    0x8(%ebp),%eax
08622ad4 +0x018:  movzbl (%eax),%eax
08622ad7 +0x01b:  xor    $0x1,%eax
08622ada +0x01e:  test   %al,%al
08622adc +0x020:  je     08622ae8 <+0x2c>
08622ade +0x022:  mov    $0x1,%eax
08622ae3 +0x027:  jmp    08622c5b <+0x19f>
08622ae8 +0x02c:  cmpl   $0xffffffff,0xc(%ebp)
08622aec +0x030:  je     08622c56 <+0x19a>
08622af2 +0x036:  lea    -0x10b(%ebp),%edx
08622af8 +0x03c:  mov    $0xff,%ebx
08622afd +0x041:  mov    $0x0,%eax
08622b02 +0x046:  mov    %edx,%ecx
08622b04 +0x048:  and    $0x1,%ecx
08622b07 +0x04b:  test   %ecx,%ecx
08622b09 +0x04d:  je     08622b13 <+0x57>
08622b0b +0x04f:  mov    %al,(%edx)
08622b0d +0x051:  add    $0x1,%edx
08622b10 +0x054:  sub    $0x1,%ebx
08622b13 +0x057:  mov    %edx,%ecx
08622b15 +0x059:  and    $0x2,%ecx
08622b18 +0x05c:  test   %ecx,%ecx
08622b1a +0x05e:  je     08622b25 <+0x69>
08622b1c +0x060:  mov    %ax,(%edx)
08622b1f +0x063:  add    $0x2,%edx
08622b22 +0x066:  sub    $0x2,%ebx
08622b25 +0x069:  mov    %ebx,%ecx
08622b27 +0x06b:  shr    $0x2,%ecx
08622b2a +0x06e:  mov    %edx,%edi
08622b2c +0x070:  rep stos %eax,%es:(%edi)
08622b2e +0x072:  mov    %edi,%edx
08622b30 +0x074:  mov    %ebx,%ecx
08622b32 +0x076:  and    $0x2,%ecx
08622b35 +0x079:  test   %ecx,%ecx
08622b37 +0x07b:  je     08622b3f <+0x83>
08622b39 +0x07d:  mov    %ax,(%edx)
08622b3c +0x080:  add    $0x2,%edx
08622b3f +0x083:  mov    %ebx,%ecx
08622b41 +0x085:  and    $0x1,%ecx
08622b44 +0x088:  test   %ecx,%ecx
08622b46 +0x08a:  je     08622b4d <+0x91>
08622b48 +0x08c:  mov    %al,(%edx)
08622b4a +0x08e:  add    $0x1,%edx
08622b4d +0x091:  movswl -0x11c(%ebp),%eax
08622b54 +0x098:  cmp    $0x2,%eax
08622b57 +0x09b:  je     08622b94 <+0xd8>
08622b59 +0x09d:  cmp    $0x2,%eax
08622b5c +0x0a0:  jg     08622b68 <+0xac>
08622b5e +0x0a2:  cmp    $0x1,%eax
08622b61 +0x0a5:  je     08622b74 <+0xb8>
08622b63 +0x0a7:  jmp    08622bf2 <+0x136>
08622b68 +0x0ac:  cmp    $0x3,%eax
08622b6b +0x0af:  je     08622bb4 <+0xf8>
08622b6d +0x0b1:  cmp    $0x4,%eax
08622b70 +0x0b4:  je     08622bd4 <+0x118>
08622b72 +0x0b6:  jmp    08622bf2 <+0x136>
08622b74 +0x0b8:  movl   $0x4,0x8(%esp)
08622b7c +0x0c0:  movl   $"7일",0x4(%esp)
08622b84 +0x0c8:  lea    -0x10b(%ebp),%eax
08622b8a +0x0ce:  mov    %eax,(%esp)
08622b8d +0x0d1:  call   0807d8a0 <_init+0x198>
08622b92 +0x0d6:  jmp    08622bf2 <+0x136>
08622b94 +0x0d8:  movl   $0x5,0x8(%esp)
08622b9c +0x0e0:  movl   $"30일",0x4(%esp)
08622ba4 +0x0e8:  lea    -0x10b(%ebp),%eax
08622baa +0x0ee:  mov    %eax,(%esp)
08622bad +0x0f1:  call   0807d8a0 <_init+0x198>
08622bb2 +0x0f6:  jmp    08622bf2 <+0x136>
08622bb4 +0x0f8:  movl   $0x5,0x8(%esp)
08622bbc +0x100:  movl   $"영구",0x4(%esp)
08622bc4 +0x108:  lea    -0x10b(%ebp),%eax
08622bca +0x10e:  mov    %eax,(%esp)
08622bcd +0x111:  call   0807d8a0 <_init+0x198>
08622bd2 +0x116:  jmp    08622bf2 <+0x136>
08622bd4 +0x118:  movl   $0x7,0x8(%esp)
08622bdc +0x120:  movl   $"엠블렘",0x4(%esp)
08622be4 +0x128:  lea    -0x10b(%ebp),%eax
08622bea +0x12e:  mov    %eax,(%esp)
08622bed +0x131:  call   0807d8a0 <_init+0x198>
08622bf2 +0x136:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622bf7 +0x13b:  movl   $0x0,0x8(%esp)
08622bff +0x143:  movl   $0x5,0x4(%esp)
08622c07 +0x14b:  mov    %eax,(%esp)
08622c0a +0x14e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622c0f +0x153:  mov    %eax,-0xc(%ebp)
08622c12 +0x156:  mov    0x18(%ebp),%eax
08622c15 +0x159:  mov    %eax,0x14(%esp)
08622c19 +0x15d:  mov    0x14(%ebp),%eax
08622c1c +0x160:  mov    %eax,0x10(%esp)
08622c20 +0x164:  mov    0x10(%ebp),%eax
08622c23 +0x167:  mov    %eax,0xc(%esp)
08622c27 +0x16b:  mov    0xc(%ebp),%eax
08622c2a +0x16e:  mov    %eax,0x8(%esp)
08622c2e +0x172:  movl   $"inSert into dnf_item_price(ipg_no, it_no, it_cnt, cera_price) values(%d,%d,%d,%d)",0x4(%esp)
08622c36 +0x17a:  mov    -0xc(%ebp),%eax
08622c39 +0x17d:  mov    %eax,(%esp)
08622c3c +0x180:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622c41 +0x185:  movl   $0x1,0x4(%esp)
08622c49 +0x18d:  mov    -0xc(%ebp),%eax
08622c4c +0x190:  mov    %eax,(%esp)
08622c4f +0x193:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622c54 +0x198:  jmp    08622c5b <+0x19f>
08622c56 +0x19a:  mov    $0x1,%eax
08622c5b +0x19f:  add    $0x140,%esp
08622c61 +0x1a5:  pop    %ebx
08622c62 +0x1a6:  pop    %edi
08622c63 +0x1a7:  pop    %ebp
08622c64 +0x1a8:  ret
08622c65 +0x1a9:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insertCeraShopItemIntoDB @ 0x8622abc

/* sync_script::CSyncScript::insertCeraShopItemIntoDB(unsigned int, unsigned int, int, int, short,
   char const*, char const*) */

undefined4
sync_script::CSyncScript::insertCeraShopItemIntoDB
          (uint param_1,uint param_2,int param_3,int param_4,short param_5,char *param_6,
          char *param_7)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined2 in_stack_00000016;
  undefined1 local_10f [255];
  MySQL *local_10;
  
  sVar1 = (short)param_6;
  if (*(char *)param_1 == '\x01') {
    if (param_2 == 0xffffffff) {
      uVar2 = 1;
    }
    else {
      puVar4 = (undefined4 *)local_10f;
      uVar5 = 0xff;
      bVar6 = ((uint)puVar4 & 1) != 0;
      if (bVar6) {
        local_10f[0] = 0;
        puVar4 = (undefined4 *)(local_10f + 1);
        uVar5 = 0xfe;
      }
      if (((uint)puVar4 & 2) != 0) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
        uVar5 = uVar5 - 2;
      }
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      if (!bVar6) {
        *(undefined1 *)puVar4 = 0;
      }
      if (sVar1 == 2) {
        memcpy(local_10f,&DAT_08ce3da0,5);
      }
      else if (sVar1 < 3) {
        if (sVar1 == 1) {
          memcpy(local_10f,&DAT_08ce3d9c,4);
        }
      }
      else if (sVar1 == 3) {
        memcpy(local_10f,&DAT_08ce3da5,5);
      }
      else if (sVar1 == 4) {
        memcpy(local_10f,&DAT_08ce3daa,7);
      }
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
      MySQL::set_query(local_10,
                       "inSert into dnf_item_price(ipg_no, it_no, it_cnt, cera_price) values(%d,%d,%d,%d)"
                       ,param_2,param_3,param_4,_param_5);
      uVar2 = MySQL::exec(local_10,true);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
