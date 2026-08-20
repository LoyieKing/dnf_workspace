# _getGameDBCharacView

`_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA`

`DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084149ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084149ce  _ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA
#           DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*)
# range [0x084149ce, 0x08414c6d]
084149ce +0x000:  push   %ebp
084149cf +0x001:  mov    %esp,%ebp
084149d1 +0x003:  push   %edi
084149d2 +0x004:  push   %ebx
084149d3 +0x005:  sub    $0x1d0,%esp
084149d9 +0x00b:  movl   $0x2,0x4(%esp)
084149e1 +0x013:  mov    0x8(%ebp),%eax
084149e4 +0x016:  mov    %eax,(%esp)
084149e7 +0x019:  call   0840f4f8 <_ZN8DB_Login10_getGameDBE18ENUM_DB_HANDLE_IDX>  ; DB_Login::_getGameDB(ENUM_DB_HANDLE_IDX)
084149ec +0x01e:  mov    %eax,-0x10(%ebp)
084149ef +0x021:  mov    0xc(%ebp),%eax
084149f2 +0x024:  mov    0xc0(%eax),%eax
084149f8 +0x02a:  movl   $0x0,0x4(%esp)
08414a00 +0x032:  mov    %eax,(%esp)
08414a03 +0x035:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08414a08 +0x03a:  mov    %eax,0x8(%esp)
08414a0c +0x03e:  movl   $"seLect info,hash_key,password(info),slot_effect_count,charac_slot_limit from charac_view where m_id=%s",0x4(%esp)
08414a14 +0x046:  mov    -0x10(%ebp),%eax
08414a17 +0x049:  mov    %eax,(%esp)
08414a1a +0x04c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08414a1f +0x051:  movl   $0x1,0x4(%esp)
08414a27 +0x059:  mov    -0x10(%ebp),%eax
08414a2a +0x05c:  mov    %eax,(%esp)
08414a2d +0x05f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08414a32 +0x064:  xor    $0x1,%eax
08414a35 +0x067:  test   %al,%al
08414a37 +0x069:  je     08414a43 <+0x75>
08414a39 +0x06b:  mov    $0xffffffff,%eax
08414a3e +0x070:  jmp    08414c64 <+0x296>
08414a43 +0x075:  mov    -0x10(%ebp),%eax
08414a46 +0x078:  mov    %eax,(%esp)
08414a49 +0x07b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08414a4e +0x080:  test   %eax,%eax
08414a50 +0x082:  sete   %al
08414a53 +0x085:  test   %al,%al
08414a55 +0x087:  je     08414a61 <+0x93>
08414a57 +0x089:  mov    $0x1,%eax
08414a5c +0x08e:  jmp    08414c64 <+0x296>
08414a61 +0x093:  mov    -0x10(%ebp),%eax
08414a64 +0x096:  mov    %eax,(%esp)
08414a67 +0x099:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08414a6c +0x09e:  xor    $0x1,%eax
08414a6f +0x0a1:  test   %al,%al
08414a71 +0x0a3:  je     08414a7d <+0xaf>
08414a73 +0x0a5:  mov    $0xffffffff,%eax
08414a78 +0x0aa:  jmp    08414c64 <+0x296>
08414a7d +0x0af:  mov    0xc(%ebp),%eax
08414a80 +0x0b2:  add    $0xe0,%eax
08414a85 +0x0b7:  movl   $0x94,0x10(%esp)
08414a8d +0x0bf:  movl   $0x14d0,0xc(%esp)
08414a95 +0x0c7:  mov    %eax,0x8(%esp)
08414a99 +0x0cb:  movl   $0x0,0x4(%esp)
08414aa1 +0x0d3:  mov    -0x10(%ebp),%eax
08414aa4 +0x0d6:  mov    %eax,(%esp)
08414aa7 +0x0d9:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08414aac +0x0de:  xor    $0x1,%eax
08414aaf +0x0e1:  test   %al,%al
08414ab1 +0x0e3:  je     08414b00 <+0x132>
08414ab3 +0x0e5:  mov    0xc(%ebp),%eax
08414ab6 +0x0e8:  mov    0xc0(%eax),%ebx
08414abc +0x0ee:  movl   $0x5,0xc(%esp)
08414ac4 +0x0f6:  movl   $0x3beb,0x8(%esp)
08414acc +0x0fe:  movl   $&_ZZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08414ad4 +0x106:  lea    -0x20(%ebp),%eax
08414ad7 +0x109:  mov    %eax,(%esp)
08414ada +0x10c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08414adf +0x111:  mov    %ebx,0x8(%esp)
08414ae3 +0x115:  movl   $"DB_Login::_getGameDBCharacView uncompress fail, m_id(%d)",0x4(%esp)
08414aeb +0x11d:  lea    -0x20(%ebp),%eax
08414aee +0x120:  mov    %eax,(%esp)
08414af1 +0x123:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08414af6 +0x128:  mov    $0xffffffff,%eax
08414afb +0x12d:  jmp    08414c64 <+0x296>
08414b00 +0x132:  lea    -0xa4(%ebp),%ebx
08414b06 +0x138:  mov    $0x0,%eax
08414b0b +0x13d:  mov    $0x21,%edx
08414b10 +0x142:  mov    %ebx,%edi
08414b12 +0x144:  mov    %edx,%ecx
08414b14 +0x146:  rep stos %eax,%es:(%edi)
08414b16 +0x148:  lea    -0x128(%ebp),%ebx
08414b1c +0x14e:  mov    $0x0,%eax
08414b21 +0x153:  mov    $0x21,%edx
08414b26 +0x158:  mov    %ebx,%edi
08414b28 +0x15a:  mov    %edx,%ecx
08414b2a +0x15c:  rep stos %eax,%es:(%edi)
08414b2c +0x15e:  lea    -0x1ac(%ebp),%ebx
08414b32 +0x164:  mov    $0x0,%eax
08414b37 +0x169:  mov    $0x21,%edx
08414b3c +0x16e:  mov    %ebx,%edi
08414b3e +0x170:  mov    %edx,%ecx
08414b40 +0x172:  rep stos %eax,%es:(%edi)
08414b42 +0x174:  movl   $0x84,0xc(%esp)
08414b4a +0x17c:  lea    -0x128(%ebp),%eax
08414b50 +0x182:  mov    %eax,0x8(%esp)
08414b54 +0x186:  movl   $0x1,0x4(%esp)
08414b5c +0x18e:  mov    -0x10(%ebp),%eax
08414b5f +0x191:  mov    %eax,(%esp)
08414b62 +0x194:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08414b67 +0x199:  xor    $0x1,%eax
08414b6a +0x19c:  test   %al,%al
08414b6c +0x19e:  je     08414b78 <+0x1aa>
08414b6e +0x1a0:  mov    $0xffffffff,%eax
08414b73 +0x1a5:  jmp    08414c64 <+0x296>
08414b78 +0x1aa:  movl   $0x84,0xc(%esp)
08414b80 +0x1b2:  lea    -0x1ac(%ebp),%eax
08414b86 +0x1b8:  mov    %eax,0x8(%esp)
08414b8a +0x1bc:  movl   $0x2,0x4(%esp)
08414b92 +0x1c4:  mov    -0x10(%ebp),%eax
08414b95 +0x1c7:  mov    %eax,(%esp)
08414b98 +0x1ca:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08414b9d +0x1cf:  xor    $0x1,%eax
08414ba0 +0x1d2:  test   %al,%al
08414ba2 +0x1d4:  je     08414bae <+0x1e0>
08414ba4 +0x1d6:  mov    $0xffffffff,%eax
08414ba9 +0x1db:  jmp    08414c64 <+0x296>
08414bae +0x1e0:  mov    0xc(%ebp),%eax
08414bb1 +0x1e3:  add    $0x3fa0,%eax
08414bb6 +0x1e8:  mov    %eax,0x8(%esp)
08414bba +0x1ec:  movl   $0x3,0x4(%esp)
08414bc2 +0x1f4:  mov    -0x10(%ebp),%eax
08414bc5 +0x1f7:  mov    %eax,(%esp)
08414bc8 +0x1fa:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08414bcd +0x1ff:  xor    $0x1,%eax
08414bd0 +0x202:  test   %al,%al
08414bd2 +0x204:  je     08414bde <+0x210>
08414bd4 +0x206:  mov    $0xffffffff,%eax
08414bd9 +0x20b:  jmp    08414c64 <+0x296>
08414bde +0x210:  mov    0xc(%ebp),%eax
08414be1 +0x213:  add    $0x3fa1,%eax
08414be6 +0x218:  mov    %eax,0x8(%esp)
08414bea +0x21c:  movl   $0x4,0x4(%esp)
08414bf2 +0x224:  mov    -0x10(%ebp),%eax
08414bf5 +0x227:  mov    %eax,(%esp)
08414bf8 +0x22a:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08414bfd +0x22f:  xor    $0x1,%eax
08414c00 +0x232:  test   %al,%al
08414c02 +0x234:  je     08414c0b <+0x23d>
08414c04 +0x236:  mov    $0xffffffff,%eax
08414c09 +0x23b:  jmp    08414c64 <+0x296>
08414c0b +0x23d:  mov    0xc(%ebp),%eax
08414c0e +0x240:  movl   $0x0,0xdc(%eax)
08414c18 +0x24a:  movl   $0x0,-0xc(%ebp)
08414c1f +0x251:  jmp    08414c54 <+0x286>
08414c21 +0x253:  mov    -0xc(%ebp),%eax
08414c24 +0x256:  mov    0xc(%ebp),%edx
08414c27 +0x259:  imul   $0x94,%eax,%eax
08414c2d +0x25f:  lea    (%edx,%eax,1),%eax
08414c30 +0x262:  add    $0xe0,%eax
08414c35 +0x267:  mov    (%eax),%eax
08414c37 +0x269:  test   %eax,%eax
08414c39 +0x26b:  je     08414c50 <+0x282>
08414c3b +0x26d:  mov    0xc(%ebp),%eax
08414c3e +0x270:  mov    0xdc(%eax),%eax
08414c44 +0x276:  lea    0x1(%eax),%edx
08414c47 +0x279:  mov    0xc(%ebp),%eax
08414c4a +0x27c:  mov    %edx,0xdc(%eax)
08414c50 +0x282:  addl   $0x1,-0xc(%ebp)
08414c54 +0x286:  cmpl   $0x23,-0xc(%ebp)
08414c58 +0x28a:  setle  %al
08414c5b +0x28d:  test   %al,%al
08414c5d +0x28f:  jne    08414c21 <+0x253>
08414c5f +0x291:  mov    $0x0,%eax
08414c64 +0x296:  add    $0x1d0,%esp
08414c6a +0x29c:  pop    %ebx
08414c6b +0x29d:  pop    %edi
08414c6c +0x29e:  pop    %ebp
08414c6d +0x29f:  ret
```

## 反编译 C

```c
// DB_Login::_getGameDBCharacView @ 0x84149ce

/* DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::_getGameDBCharacView(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_1b0 [33];
  undefined4 local_12c [33];
  undefined4 local_a8 [33];
  cMyTrace local_24 [16];
  MySQL *local_14;
  int local_10;
  
  bVar5 = 0;
  local_14 = (MySQL *)_getGameDB(this,2);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_14,
                   "seLect info,hash_key,password(info),slot_effect_count,charac_slot_limit from charac_view where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_14);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        cVar1 = get_compressed_blob_data(local_14,0,(char *)(param_1 + 0xe0),0x14d0,0x94);
        if (cVar1 == '\x01') {
          puVar4 = local_a8;
          for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          puVar4 = local_12c;
          for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          puVar4 = local_1b0;
          for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          cVar1 = MySQL::get_binary(local_14,1,local_12c,0x84);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_binary(local_14,2,local_1b0,0x84);
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_ubyte(local_14,3,(uchar *)(param_1 + 0x3fa0));
              if (cVar1 == '\x01') {
                cVar1 = MySQL::get_ubyte(local_14,4,(uchar *)(param_1 + 0x3fa1));
                if (cVar1 == '\x01') {
                  *(undefined4 *)(param_1 + 0xdc) = 0;
                  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
                    if (*(int *)(param_1 + local_10 * 0x94 + 0xe0) != 0) {
                      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
                    }
                  }
                  uVar2 = 0;
                }
                else {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0xc0);
          cMyTrace::cMyTrace(local_24,
                             "DB_Login::RV_GetGameDBCharacInfo DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*)"
                             ,0x3beb,5);
          cMyTrace::operator()
                    (local_24,"DB_Login::_getGameDBCharacView uncompress fail, m_id(%d)",uVar2);
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
