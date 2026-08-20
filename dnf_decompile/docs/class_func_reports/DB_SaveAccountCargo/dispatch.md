# dispatch

`_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream`

`DB_SaveAccountCargo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveAccountCargo` | `0x0843b7c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b7c2  _ZN19DB_SaveAccountCargo8dispatchEiiP6Stream
#           DB_SaveAccountCargo::dispatch(int, int, Stream*)
# range [0x0843b7c2, 0x0843b945]
0843b7c2 +0x000:  push   %ebp
0843b7c3 +0x001:  mov    %esp,%ebp
0843b7c5 +0x003:  push   %edi
0843b7c6 +0x004:  push   %ebx
0843b7c7 +0x005:  sub    $0x1040,%esp
0843b7cd +0x00b:  movl   $0x0,-0x14(%ebp)
0843b7d4 +0x012:  lea    -0x14(%ebp),%eax
0843b7d7 +0x015:  mov    %eax,0x4(%esp)
0843b7db +0x019:  mov    0x14(%ebp),%eax
0843b7de +0x01c:  mov    %eax,(%esp)
0843b7e1 +0x01f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843b7e6 +0x024:  mov    0x14(%ebp),%eax
0843b7e9 +0x027:  mov    %eax,(%esp)
0843b7ec +0x02a:  call   08453a26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x663c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x663c
0843b7f1 +0x02f:  mov    %eax,-0x10(%ebp)
0843b7f4 +0x032:  lea    -0x1027(%ebp),%edx
0843b7fa +0x038:  mov    $0x100f,%ebx
0843b7ff +0x03d:  mov    $0x0,%eax
0843b804 +0x042:  mov    %edx,%ecx
0843b806 +0x044:  and    $0x1,%ecx
0843b809 +0x047:  test   %ecx,%ecx
0843b80b +0x049:  je     0843b815 <+0x53>
0843b80d +0x04b:  mov    %al,(%edx)
0843b80f +0x04d:  add    $0x1,%edx
0843b812 +0x050:  sub    $0x1,%ebx
0843b815 +0x053:  mov    %edx,%ecx
0843b817 +0x055:  and    $0x2,%ecx
0843b81a +0x058:  test   %ecx,%ecx
0843b81c +0x05a:  je     0843b827 <+0x65>
0843b81e +0x05c:  mov    %ax,(%edx)
0843b821 +0x05f:  add    $0x2,%edx
0843b824 +0x062:  sub    $0x2,%ebx
0843b827 +0x065:  mov    %ebx,%ecx
0843b829 +0x067:  shr    $0x2,%ecx
0843b82c +0x06a:  mov    %edx,%edi
0843b82e +0x06c:  rep stos %eax,%es:(%edi)
0843b830 +0x06e:  mov    %edi,%edx
0843b832 +0x070:  mov    %ebx,%ecx
0843b834 +0x072:  and    $0x2,%ecx
0843b837 +0x075:  test   %ecx,%ecx
0843b839 +0x077:  je     0843b841 <+0x7f>
0843b83b +0x079:  mov    %ax,(%edx)
0843b83e +0x07c:  add    $0x2,%edx
0843b841 +0x07f:  mov    %ebx,%ecx
0843b843 +0x081:  and    $0x1,%ecx
0843b846 +0x084:  test   %ecx,%ecx
0843b848 +0x086:  je     0843b84f <+0x8d>
0843b84a +0x088:  mov    %al,(%edx)
0843b84c +0x08a:  add    $0x1,%edx
0843b84f +0x08d:  movl   $0x100f,-0x18(%ebp)
0843b856 +0x094:  mov    -0x10(%ebp),%eax
0843b859 +0x097:  add    $0x8,%eax
0843b85c +0x09a:  movl   $0xd58,0xc(%esp)
0843b864 +0x0a2:  mov    %eax,0x8(%esp)
0843b868 +0x0a6:  lea    -0x18(%ebp),%eax
0843b86b +0x0a9:  mov    %eax,0x4(%esp)
0843b86f +0x0ad:  lea    -0x1027(%ebp),%eax
0843b875 +0x0b3:  mov    %eax,(%esp)
0843b878 +0x0b6:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0843b87d +0x0bb:  xor    $0x1,%eax
0843b880 +0x0be:  test   %al,%al
0843b882 +0x0c0:  je     0843b88e <+0xcc>
0843b884 +0x0c2:  mov    $0x0,%eax
0843b889 +0x0c7:  jmp    0843b93b <+0x179>
0843b88e +0x0cc:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843b893 +0x0d1:  movl   $0x0,0x8(%esp)
0843b89b +0x0d9:  movl   $0x2,0x4(%esp)
0843b8a3 +0x0e1:  mov    %eax,(%esp)
0843b8a6 +0x0e4:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843b8ab +0x0e9:  mov    %eax,-0xc(%ebp)
0843b8ae +0x0ec:  mov    -0x14(%ebp),%eax
0843b8b1 +0x0ef:  movl   $0x0,0x4(%esp)
0843b8b9 +0x0f7:  mov    %eax,(%esp)
0843b8bc +0x0fa:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843b8c1 +0x0ff:  mov    %eax,%ebx
0843b8c3 +0x101:  mov    -0x18(%ebp),%eax
0843b8c6 +0x104:  mov    %eax,0xc(%esp)
0843b8ca +0x108:  lea    -0x1027(%ebp),%eax
0843b8d0 +0x10e:  mov    %eax,0x8(%esp)
0843b8d4 +0x112:  movl   $0x0,0x4(%esp)
0843b8dc +0x11a:  mov    -0xc(%ebp),%eax
0843b8df +0x11d:  mov    %eax,(%esp)
0843b8e2 +0x120:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0843b8e7 +0x125:  mov    -0x10(%ebp),%edx
0843b8ea +0x128:  mov    0x4(%edx),%ecx
0843b8ed +0x12b:  mov    -0x10(%ebp),%edx
0843b8f0 +0x12e:  mov    (%edx),%edx
0843b8f2 +0x130:  mov    %ebx,0x14(%esp)
0843b8f6 +0x134:  mov    %eax,0x10(%esp)
0843b8fa +0x138:  mov    %ecx,0xc(%esp)
0843b8fe +0x13c:  mov    %edx,0x8(%esp)
0843b902 +0x140:  movl   $"upDate account_cargo set capacity=%u, money=%u, cargo='%s' where m_id = %s",0x4(%esp)
0843b90a +0x148:  mov    -0xc(%ebp),%eax
0843b90d +0x14b:  mov    %eax,(%esp)
0843b910 +0x14e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843b915 +0x153:  movl   $0x1,0x4(%esp)
0843b91d +0x15b:  mov    -0xc(%ebp),%eax
0843b920 +0x15e:  mov    %eax,(%esp)
0843b923 +0x161:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843b928 +0x166:  xor    $0x1,%eax
0843b92b +0x169:  test   %al,%al
0843b92d +0x16b:  je     0843b936 <+0x174>
0843b92f +0x16d:  mov    $0x0,%eax
0843b934 +0x172:  jmp    0843b93b <+0x179>
0843b936 +0x174:  mov    $0x1,%eax
0843b93b +0x179:  add    $0x1040,%esp
0843b941 +0x17f:  pop    %ebx
0843b942 +0x180:  pop    %edi
0843b943 +0x181:  pop    %ebp
0843b944 +0x182:  ret
0843b945 +0x183:  nop
```

## 反编译 C

```c
// DB_SaveAccountCargo::dispatch @ 0x843b7c2

/* DB_SaveAccountCargo::dispatch(int, int, Stream*) */

undefined4 DB_SaveAccountCargo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  Stream *in_stack_00000010;
  char local_102b;
  char local_102a [4110];
  uint local_1c;
  uint local_18;
  SIG_ACCOUNT_CARGO_DATA *local_14;
  MySQL *local_10;
  
  bVar8 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  local_14 = Stream::GetOutBuffer<SIG_ACCOUNT_CARGO_DATA>(in_stack_00000010);
  pcVar5 = &local_102b;
  uVar6 = 0x100f;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_102b = '\0';
    pcVar5 = local_102a;
    uVar6 = 0x100e;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
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
  local_1c = 0x100f;
  cVar1 = compress_zip(&local_102b,&local_1c,(char *)(local_14 + 8),0xd58);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    uVar2 = NumberToString(local_18,0);
    uVar3 = MySQL::blob_to_str(local_10,0,&local_102b,local_1c);
    MySQL::set_query(local_10,
                     "upDate account_cargo set capacity=%u, money=%u, cargo=\'%s\' where m_id = %s",
                     *(undefined4 *)local_14,*(undefined4 *)(local_14 + 4),uVar3,uVar2);
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
