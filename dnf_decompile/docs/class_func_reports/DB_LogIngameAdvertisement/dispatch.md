# dispatch

`_ZN25DB_LogIngameAdvertisement8dispatchEiiP6Stream`

`DB_LogIngameAdvertisement::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LogIngameAdvertisement` | `0x0844c304` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c304  _ZN25DB_LogIngameAdvertisement8dispatchEiiP6Stream
#           DB_LogIngameAdvertisement::dispatch(int, int, Stream*)
# range [0x0844c304, 0x0844c409]
0844c304 +0x000:  push   %ebp
0844c305 +0x001:  mov    %esp,%ebp
0844c307 +0x003:  push   %edi
0844c308 +0x004:  push   %esi
0844c309 +0x005:  push   %ebx
0844c30a +0x006:  sub    $0x5c,%esp
0844c30d +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844c312 +0x00e:  movl   $0x0,0x8(%esp)
0844c31a +0x016:  movl   $0x4,0x4(%esp)
0844c322 +0x01e:  mov    %eax,(%esp)
0844c325 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844c32a +0x026:  mov    %eax,-0x24(%ebp)
0844c32d +0x029:  mov    0x14(%ebp),%eax
0844c330 +0x02c:  mov    %eax,(%esp)
0844c333 +0x02f:  call   084548ca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x74e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x74e0
0844c338 +0x034:  mov    %eax,-0x20(%ebp)
0844c33b +0x037:  cmpl   $0x0,-0x20(%ebp)
0844c33f +0x03b:  jne    0844c34b <+0x47>
0844c341 +0x03d:  mov    $0x0,%eax
0844c346 +0x042:  jmp    0844c402 <+0xfe>
0844c34b +0x047:  mov    -0x20(%ebp),%eax
0844c34e +0x04a:  mov    0x1c(%eax),%ebx
0844c351 +0x04d:  mov    -0x20(%ebp),%eax
0844c354 +0x050:  mov    0x18(%eax),%esi
0844c357 +0x053:  mov    -0x20(%ebp),%eax
0844c35a +0x056:  mov    0x14(%eax),%eax
0844c35d +0x059:  mov    %eax,-0x34(%ebp)
0844c360 +0x05c:  mov    -0x20(%ebp),%eax
0844c363 +0x05f:  mov    0x10(%eax),%eax
0844c366 +0x062:  mov    %eax,-0x30(%ebp)
0844c369 +0x065:  mov    -0x20(%ebp),%eax
0844c36c +0x068:  movzbl 0xc(%eax),%eax
0844c370 +0x06c:  movsbl %al,%eax
0844c373 +0x06f:  mov    %eax,-0x2c(%ebp)
0844c376 +0x072:  mov    -0x20(%ebp),%eax
0844c379 +0x075:  movzwl 0xa(%eax),%eax
0844c37d +0x079:  movswl %ax,%edi
0844c380 +0x07c:  mov    -0x20(%ebp),%eax
0844c383 +0x07f:  movzbl 0x8(%eax),%eax
0844c387 +0x083:  movsbl %al,%ecx
0844c38a +0x086:  mov    -0x20(%ebp),%eax
0844c38d +0x089:  mov    0x4(%eax),%edx
0844c390 +0x08c:  mov    -0x20(%ebp),%eax
0844c393 +0x08f:  mov    (%eax),%eax
0844c395 +0x091:  mov    %ebx,0x28(%esp)
0844c399 +0x095:  mov    %esi,0x24(%esp)
0844c39d +0x099:  mov    -0x34(%ebp),%ebx
0844c3a0 +0x09c:  mov    %ebx,0x20(%esp)
0844c3a4 +0x0a0:  mov    -0x30(%ebp),%ebx
0844c3a7 +0x0a3:  mov    %ebx,0x1c(%esp)
0844c3ab +0x0a7:  mov    -0x2c(%ebp),%ebx
0844c3ae +0x0aa:  mov    %ebx,0x18(%esp)
0844c3b2 +0x0ae:  mov    %edi,0x14(%esp)
0844c3b6 +0x0b2:  mov    %ecx,0x10(%esp)
0844c3ba +0x0b6:  mov    %edx,0xc(%esp)
0844c3be +0x0ba:  mov    %eax,0x8(%esp)
0844c3c2 +0x0be:  movl   $"inSert into log_in_game_ad(occ_date, m_id, charac_no, state, view_code, type_code, banner_id, dungeon_index, village_index, area_index) values (now(), %u, %u, %d, %d, %d, %u, %d, %d, %d)",0x4(%esp)
0844c3ca +0x0c6:  mov    -0x24(%ebp),%eax
0844c3cd +0x0c9:  mov    %eax,(%esp)
0844c3d0 +0x0cc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c3d5 +0x0d1:  movl   $0x1,0x4(%esp)
0844c3dd +0x0d9:  mov    -0x24(%ebp),%eax
0844c3e0 +0x0dc:  mov    %eax,(%esp)
0844c3e3 +0x0df:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c3e8 +0x0e4:  mov    %al,-0x19(%ebp)
0844c3eb +0x0e7:  movzbl -0x19(%ebp),%eax
0844c3ef +0x0eb:  xor    $0x1,%eax
0844c3f2 +0x0ee:  test   %al,%al
0844c3f4 +0x0f0:  je     0844c3fd <+0xf9>
0844c3f6 +0x0f2:  mov    $0x0,%eax
0844c3fb +0x0f7:  jmp    0844c402 <+0xfe>
0844c3fd +0x0f9:  mov    $0x1,%eax
0844c402 +0x0fe:  add    $0x5c,%esp
0844c405 +0x101:  pop    %ebx
0844c406 +0x102:  pop    %esi
0844c407 +0x103:  pop    %edi
0844c408 +0x104:  pop    %ebp
0844c409 +0x105:  ret
```

## 反编译 C

```c
// DB_LogIngameAdvertisement::dispatch @ 0x844c304

/* DB_LogIngameAdvertisement::dispatch(int, int, Stream*) */

undefined4 DB_LogIngameAdvertisement::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_IN_GAME_ADVERTISEMENT_LOG *pSVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar2 = Stream::GetOutBuffer<SIG_IN_GAME_ADVERTISEMENT_LOG>(in_stack_00000010);
  if (pSVar2 == (SIG_IN_GAME_ADVERTISEMENT_LOG *)0x0) {
    uVar3 = 0;
  }
  else {
    MySQL::set_query(this,
                     "inSert into log_in_game_ad(occ_date, m_id, charac_no, state, view_code, type_code, banner_id, dungeon_index, village_index, area_index) values (now(), %u, %u, %d, %d, %d, %u, %d, %d, %d)"
                     ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),(int)(char)pSVar2[8],
                     (int)*(short *)(pSVar2 + 10),(int)(char)pSVar2[0xc],
                     *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                     *(undefined4 *)(pSVar2 + 0x18),*(undefined4 *)(pSVar2 + 0x1c));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
