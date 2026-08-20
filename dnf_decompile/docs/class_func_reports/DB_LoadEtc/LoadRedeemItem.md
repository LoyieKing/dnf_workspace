# LoadRedeemItem

`_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406a6a  _ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)
# range [0x08406a6a, 0x08406ccd]
08406a6a +0x000:  push   %ebp
08406a6b +0x001:  mov    %esp,%ebp
08406a6d +0x003:  push   %edi
08406a6e +0x004:  push   %ebx
08406a6f +0x005:  sub    $0x720,%esp
08406a75 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08406a7a +0x010:  movl   $0x0,0x8(%esp)
08406a82 +0x018:  movl   $0x3,0x4(%esp)
08406a8a +0x020:  mov    %eax,(%esp)
08406a8d +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08406a92 +0x028:  mov    %eax,-0x14(%ebp)
08406a95 +0x02b:  mov    0xc(%ebp),%eax
08406a98 +0x02e:  mov    0x4(%eax),%eax
08406a9b +0x031:  mov    %eax,0x8(%esp)
08406a9f +0x035:  movl   $"seLect redeem_info from charac_inven_expand where charac_no=%u",0x4(%esp)
08406aa7 +0x03d:  mov    -0x14(%ebp),%eax
08406aaa +0x040:  mov    %eax,(%esp)
08406aad +0x043:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08406ab2 +0x048:  movl   $0x1,0x4(%esp)
08406aba +0x050:  mov    -0x14(%ebp),%eax
08406abd +0x053:  mov    %eax,(%esp)
08406ac0 +0x056:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08406ac5 +0x05b:  mov    %al,-0xd(%ebp)
08406ac8 +0x05e:  movzbl -0xd(%ebp),%eax
08406acc +0x062:  xor    $0x1,%eax
08406acf +0x065:  test   %al,%al
08406ad1 +0x067:  je     08406b1d <+0xb3>
08406ad3 +0x069:  mov    0xc(%ebp),%eax
08406ad6 +0x06c:  mov    0x4(%eax),%ebx
08406ad9 +0x06f:  movl   $0x5,0xc(%esp)
08406ae1 +0x077:  movl   $0x1b16,0x8(%esp)
08406ae9 +0x07f:  movl   $&_ZZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406af1 +0x087:  lea    -0x44(%ebp),%eax
08406af4 +0x08a:  mov    %eax,(%esp)
08406af7 +0x08d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406afc +0x092:  mov    %ebx,0x8(%esp)
08406b00 +0x096:  movl   $"DB_LoadRedeemItemList::dispatch, exec() ERROR charac_no=%u",0x4(%esp)
08406b08 +0x09e:  lea    -0x44(%ebp),%eax
08406b0b +0x0a1:  mov    %eax,(%esp)
08406b0e +0x0a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08406b13 +0x0a9:  mov    $0x0,%eax
08406b18 +0x0ae:  jmp    08406cc3 <+0x259>
08406b1d +0x0b3:  mov    -0x14(%ebp),%eax
08406b20 +0x0b6:  mov    %eax,(%esp)
08406b23 +0x0b9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08406b28 +0x0be:  test   %eax,%eax
08406b2a +0x0c0:  sete   %al
08406b2d +0x0c3:  test   %al,%al
08406b2f +0x0c5:  je     08406b3b <+0xd1>
08406b31 +0x0c7:  mov    $0x0,%eax
08406b36 +0x0cc:  jmp    08406cc3 <+0x259>
08406b3b +0x0d1:  mov    -0x14(%ebp),%eax
08406b3e +0x0d4:  mov    %eax,(%esp)
08406b41 +0x0d7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08406b46 +0x0dc:  mov    %al,-0xd(%ebp)
08406b49 +0x0df:  movzbl -0xd(%ebp),%eax
08406b4d +0x0e3:  xor    $0x1,%eax
08406b50 +0x0e6:  test   %al,%al
08406b52 +0x0e8:  je     08406b9e <+0x134>
08406b54 +0x0ea:  mov    0xc(%ebp),%eax
08406b57 +0x0ed:  mov    0x4(%eax),%ebx
08406b5a +0x0f0:  movl   $0x5,0xc(%esp)
08406b62 +0x0f8:  movl   $0x1b20,0x8(%esp)
08406b6a +0x100:  movl   $&_ZZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406b72 +0x108:  lea    -0x34(%ebp),%eax
08406b75 +0x10b:  mov    %eax,(%esp)
08406b78 +0x10e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406b7d +0x113:  mov    %ebx,0x8(%esp)
08406b81 +0x117:  movl   $"DB_LoadRedeemItemList::dispatch, fetch() ERROR charac_no=%u",0x4(%esp)
08406b89 +0x11f:  lea    -0x34(%ebp),%eax
08406b8c +0x122:  mov    %eax,(%esp)
08406b8f +0x125:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08406b94 +0x12a:  mov    $0x0,%eax
08406b99 +0x12f:  jmp    08406cc3 <+0x259>
08406b9e +0x134:  lea    -0x70f(%ebp),%edx
08406ba4 +0x13a:  mov    $0x6c7,%ebx
08406ba9 +0x13f:  mov    $0x0,%eax
08406bae +0x144:  mov    %edx,%ecx
08406bb0 +0x146:  and    $0x1,%ecx
08406bb3 +0x149:  test   %ecx,%ecx
08406bb5 +0x14b:  je     08406bbf <+0x155>
08406bb7 +0x14d:  mov    %al,(%edx)
08406bb9 +0x14f:  add    $0x1,%edx
08406bbc +0x152:  sub    $0x1,%ebx
08406bbf +0x155:  mov    %edx,%ecx
08406bc1 +0x157:  and    $0x2,%ecx
08406bc4 +0x15a:  test   %ecx,%ecx
08406bc6 +0x15c:  je     08406bd1 <+0x167>
08406bc8 +0x15e:  mov    %ax,(%edx)
08406bcb +0x161:  add    $0x2,%edx
08406bce +0x164:  sub    $0x2,%ebx
08406bd1 +0x167:  mov    %ebx,%ecx
08406bd3 +0x169:  shr    $0x2,%ecx
08406bd6 +0x16c:  mov    %edx,%edi
08406bd8 +0x16e:  rep stos %eax,%es:(%edi)
08406bda +0x170:  mov    %edi,%edx
08406bdc +0x172:  mov    %ebx,%ecx
08406bde +0x174:  and    $0x2,%ecx
08406be1 +0x177:  test   %ecx,%ecx
08406be3 +0x179:  je     08406beb <+0x181>
08406be5 +0x17b:  mov    %ax,(%edx)
08406be8 +0x17e:  add    $0x2,%edx
08406beb +0x181:  mov    %ebx,%ecx
08406bed +0x183:  and    $0x1,%ecx
08406bf0 +0x186:  test   %ecx,%ecx
08406bf2 +0x188:  je     08406bf9 <+0x18f>
08406bf4 +0x18a:  mov    %al,(%edx)
08406bf6 +0x18c:  add    $0x1,%edx
08406bf9 +0x18f:  movl   $0x6c7,-0x48(%ebp)
08406c00 +0x196:  mov    -0x48(%ebp),%eax
08406c03 +0x199:  mov    %eax,0xc(%esp)
08406c07 +0x19d:  lea    -0x70f(%ebp),%eax
08406c0d +0x1a3:  mov    %eax,0x8(%esp)
08406c11 +0x1a7:  movl   $0x0,0x4(%esp)
08406c19 +0x1af:  mov    -0x14(%ebp),%eax
08406c1c +0x1b2:  mov    %eax,(%esp)
08406c1f +0x1b5:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08406c24 +0x1ba:  xor    $0x1,%eax
08406c27 +0x1bd:  test   %al,%al
08406c29 +0x1bf:  je     08406c72 <+0x208>
08406c2b +0x1c1:  mov    0xc(%ebp),%eax
08406c2e +0x1c4:  mov    0x4(%eax),%ebx
08406c31 +0x1c7:  movl   $0x5,0xc(%esp)
08406c39 +0x1cf:  movl   $0x1b28,0x8(%esp)
08406c41 +0x1d7:  movl   $&_ZZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406c49 +0x1df:  lea    -0x24(%ebp),%eax
08406c4c +0x1e2:  mov    %eax,(%esp)
08406c4f +0x1e5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406c54 +0x1ea:  mov    %ebx,0x8(%esp)
08406c58 +0x1ee:  movl   $"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",0x4(%esp)
08406c60 +0x1f6:  lea    -0x24(%ebp),%eax
08406c63 +0x1f9:  mov    %eax,(%esp)
08406c66 +0x1fc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08406c6b +0x201:  mov    $0x0,%eax
08406c70 +0x206:  jmp    08406cc3 <+0x259>
08406c72 +0x208:  movl   $0x0,0x4(%esp)
08406c7a +0x210:  mov    -0x14(%ebp),%eax
08406c7d +0x213:  mov    %eax,(%esp)
08406c80 +0x216:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08406c85 +0x21b:  mov    %eax,-0xc(%ebp)
08406c88 +0x21e:  mov    0xc(%ebp),%eax
08406c8b +0x221:  add    $0x40ce,%eax
08406c90 +0x226:  mov    -0xc(%ebp),%edx
08406c93 +0x229:  mov    %edx,0xc(%esp)
08406c97 +0x22d:  lea    -0x70f(%ebp),%edx
08406c9d +0x233:  mov    %edx,0x8(%esp)
08406ca1 +0x237:  lea    -0x48(%ebp),%edx
08406ca4 +0x23a:  mov    %edx,0x4(%esp)
08406ca8 +0x23e:  mov    %eax,(%esp)
08406cab +0x241:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
08406cb0 +0x246:  xor    $0x1,%eax
08406cb3 +0x249:  test   %al,%al
08406cb5 +0x24b:  je     08406cbe <+0x254>
08406cb7 +0x24d:  mov    $0x0,%eax
08406cbc +0x252:  jmp    08406cc3 <+0x259>
08406cbe +0x254:  mov    $0x1,%eax
08406cc3 +0x259:  add    $0x720,%esp
08406cc9 +0x25f:  pop    %ebx
08406cca +0x260:  pop    %edi
08406ccb +0x261:  pop    %ebp
08406ccc +0x262:  ret
08406ccd +0x263:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadRedeemItem @ 0x8406a6a

/* DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadRedeemItem(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_713;
  char local_712 [1734];
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  char local_11;
  uint local_10;
  
  bVar8 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,"seLect redeem_info from charac_inven_expand where charac_no=%u",
                   *(undefined4 *)(param_1 + 4));
  local_11 = MySQL::exec(local_18,true);
  if (local_11 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      local_11 = MySQL::fetch(local_18);
      if (local_11 == '\x01') {
        pcVar5 = &local_713;
        uVar6 = 0x6c7;
        bVar7 = ((uint)pcVar5 & 1) != 0;
        if (bVar7) {
          local_713 = '\0';
          pcVar5 = local_712;
          uVar6 = 0x6c6;
        }
        if (((uint)pcVar5 & 2) != 0) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5 = pcVar5 + 2;
          uVar6 = uVar6 - 2;
        }
        local_11 = 1;
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        }
        if ((uVar6 & 2) != 0) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5 = pcVar5 + 2;
        }
        if (!bVar7) {
          *pcVar5 = '\0';
        }
        local_4c = 0x6c7;
        cVar1 = MySQL::get_binary(local_18,0,&local_713,0x6c7);
        if (cVar1 == '\x01') {
          local_10 = MySQL::get_binary_length(local_18,0);
          cVar1 = uncompress_zip((char *)(param_1 + 0x40ce),&local_4c,&local_713,local_10);
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)",0x1b28,5);
          cMyTrace::operator()
                    (local_28,"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",
                     uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)",0x1b20,5);
        cMyTrace::operator()
                  (local_38,"DB_LoadRedeemItemList::dispatch, fetch() ERROR charac_no=%u",uVar2);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)",0x1b16,5);
    cMyTrace::operator()
              (local_48,"DB_LoadRedeemItemList::dispatch, exec() ERROR charac_no=%u",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
