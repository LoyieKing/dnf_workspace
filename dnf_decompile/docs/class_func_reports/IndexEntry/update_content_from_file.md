# update_content_from_file

`_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess`

`IndexEntry::update_content_from_file(char const*, PackSet*, IPackFileProcess*)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac4476` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4476  _ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess
#           IndexEntry::update_content_from_file(char const*, PackSet*, IPackFileProcess*)
# range [0x08ac4476, 0x08ac47f3]
08ac4476 +0x000:  push   %ebp
08ac4477 +0x001:  mov    %esp,%ebp
08ac4479 +0x003:  push   %esi
08ac447a +0x004:  push   %ebx
08ac447b +0x005:  sub    $0x130,%esp
08ac4481 +0x00b:  movl   $0x0,0x10(%esp)
08ac4489 +0x013:  movl   $0x0,0xc(%esp)
08ac4491 +0x01b:  movl   $0x104,0x8(%esp)
08ac4499 +0x023:  lea    -0x114(%ebp),%eax
08ac449f +0x029:  mov    %eax,0x4(%esp)
08ac44a3 +0x02d:  mov    0xc(%ebp),%eax
08ac44a6 +0x030:  mov    %eax,(%esp)
08ac44a9 +0x033:  call   08ac3b9a <_Z17_correct_filenamePKcPcjS1_j>  ; _correct_filename(char const*, char*, unsigned int, char*, unsigned int)
08ac44ae +0x038:  movl   $"rb",0x4(%esp)
08ac44b6 +0x040:  lea    -0x114(%ebp),%eax
08ac44bc +0x046:  mov    %eax,(%esp)
08ac44bf +0x049:  call   0807e770 <_init+0x1068>
08ac44c4 +0x04e:  mov    %eax,-0x10(%ebp)
08ac44c7 +0x051:  cmpl   $0x0,-0x10(%ebp)
08ac44cb +0x055:  jne    08ac4523 <+0xad>
08ac44cd +0x057:  mov    &stdout,%eax
08ac44d2 +0x05c:  lea    -0x114(%ebp),%edx
08ac44d8 +0x062:  mov    %edx,0x8(%esp)
08ac44dc +0x066:  movl   $"_tfopen failed %s",0x4(%esp)
08ac44e4 +0x06e:  mov    %eax,(%esp)
08ac44e7 +0x071:  call   0807da90 <_init+0x388>
08ac44ec +0x076:  mov    &stdout,%eax
08ac44f1 +0x07b:  movl   $&_ZZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac44f9 +0x083:  movl   $0x1fb,0xc(%esp)
08ac4501 +0x08b:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac4509 +0x093:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac4511 +0x09b:  mov    %eax,(%esp)
08ac4514 +0x09e:  call   0807da90 <_init+0x388>
08ac4519 +0x0a3:  mov    $0x1,%eax
08ac451e +0x0a8:  jmp    08ac47ea <+0x374>
08ac4523 +0x0ad:  mov    0x8(%ebp),%eax
08ac4526 +0x0b0:  movl   $0x1,(%eax)
08ac452c +0x0b6:  mov    0x8(%ebp),%eax
08ac452f +0x0b9:  lea    0x4(%eax),%edx
08ac4532 +0x0bc:  lea    -0x114(%ebp),%eax
08ac4538 +0x0c2:  mov    %eax,0x4(%esp)
08ac453c +0x0c6:  mov    %edx,(%esp)
08ac453f +0x0c9:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08ac4544 +0x0ce:  movl   $0x2,0x8(%esp)
08ac454c +0x0d6:  movl   $0x0,0x4(%esp)
08ac4554 +0x0de:  mov    -0x10(%ebp),%eax
08ac4557 +0x0e1:  mov    %eax,(%esp)
08ac455a +0x0e4:  call   0807e0b0 <_init+0x9a8>
08ac455f +0x0e9:  mov    -0x10(%ebp),%eax
08ac4562 +0x0ec:  mov    %eax,(%esp)
08ac4565 +0x0ef:  call   0807d9d0 <_init+0x2c8>
08ac456a +0x0f4:  mov    %eax,-0xc(%ebp)
08ac456d +0x0f7:  cmpl   $0x0,-0xc(%ebp)
08ac4571 +0x0fb:  jns    08ac4588 <+0x112>
08ac4573 +0x0fd:  mov    -0x10(%ebp),%eax
08ac4576 +0x100:  mov    %eax,(%esp)
08ac4579 +0x103:  call   0807dea0 <_init+0x798>
08ac457e +0x108:  mov    $0x1,%eax
08ac4583 +0x10d:  jmp    08ac47ea <+0x374>
08ac4588 +0x112:  mov    -0xc(%ebp),%edx
08ac458b +0x115:  mov    0x8(%ebp),%eax
08ac458e +0x118:  mov    %edx,0x8(%eax)
08ac4591 +0x11b:  movl   $0x0,0x8(%esp)
08ac4599 +0x123:  movl   $0x0,0x4(%esp)
08ac45a1 +0x12b:  mov    -0x10(%ebp),%eax
08ac45a4 +0x12e:  mov    %eax,(%esp)
08ac45a7 +0x131:  call   0807e0b0 <_init+0x9a8>
08ac45ac +0x136:  mov    0x8(%ebp),%eax
08ac45af +0x139:  mov    0x8(%eax),%eax
08ac45b2 +0x13c:  add    $0x3,%eax
08ac45b5 +0x13f:  mov    %eax,%edx
08ac45b7 +0x141:  and    $0xfffffffc,%edx
08ac45ba +0x144:  mov    0x8(%ebp),%eax
08ac45bd +0x147:  mov    %edx,0xc(%eax)
08ac45c0 +0x14a:  mov    0x8(%ebp),%eax
08ac45c3 +0x14d:  mov    0x8(%eax),%eax
08ac45c6 +0x150:  test   %eax,%eax
08ac45c8 +0x152:  jne    08ac45ef <+0x179>
08ac45ca +0x154:  movl   $0x4,(%esp)
08ac45d1 +0x15b:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac45d6 +0x160:  mov    %eax,%edx
08ac45d8 +0x162:  mov    0x8(%ebp),%eax
08ac45db +0x165:  mov    %edx,0x18(%eax)
08ac45de +0x168:  mov    0x8(%ebp),%eax
08ac45e1 +0x16b:  mov    0x18(%eax),%eax
08ac45e4 +0x16e:  movl   $0x0,(%eax)
08ac45ea +0x174:  jmp    08ac473a <+0x2c4>
08ac45ef +0x179:  cmpl   $0x0,0x14(%ebp)
08ac45f3 +0x17d:  je     08ac4661 <+0x1eb>
08ac45f5 +0x17f:  mov    -0x10(%ebp),%eax
08ac45f8 +0x182:  mov    %eax,(%esp)
08ac45fb +0x185:  call   0807dea0 <_init+0x798>
08ac4600 +0x18a:  movl   $0x0,-0x10(%ebp)
08ac4607 +0x191:  mov    0x14(%ebp),%eax
08ac460a +0x194:  mov    (%eax),%eax
08ac460c +0x196:  add    $0x8,%eax
08ac460f +0x199:  mov    (%eax),%edx
08ac4611 +0x19b:  mov    0x8(%ebp),%eax
08ac4614 +0x19e:  lea    0x8(%eax),%ecx
08ac4617 +0x1a1:  mov    0x8(%ebp),%eax
08ac461a +0x1a4:  add    $0x18,%eax
08ac461d +0x1a7:  mov    %ecx,0xc(%esp)
08ac4621 +0x1ab:  mov    %eax,0x8(%esp)
08ac4625 +0x1af:  mov    0xc(%ebp),%eax
08ac4628 +0x1b2:  mov    %eax,0x4(%esp)
08ac462c +0x1b6:  mov    0x14(%ebp),%eax
08ac462f +0x1b9:  mov    %eax,(%esp)
08ac4632 +0x1bc:  call   *%edx
08ac4634 +0x1be:  cmp    $0x1,%eax
08ac4637 +0x1c1:  sete   %al
08ac463a +0x1c4:  test   %al,%al
08ac463c +0x1c6:  je     08ac4648 <+0x1d2>
08ac463e +0x1c8:  mov    $0x1,%eax
08ac4643 +0x1cd:  jmp    08ac47ea <+0x374>
08ac4648 +0x1d2:  mov    0x8(%ebp),%eax
08ac464b +0x1d5:  mov    0x8(%eax),%eax
08ac464e +0x1d8:  add    $0x3,%eax
08ac4651 +0x1db:  mov    %eax,%edx
08ac4653 +0x1dd:  and    $0xfffffffc,%edx
08ac4656 +0x1e0:  mov    0x8(%ebp),%eax
08ac4659 +0x1e3:  mov    %edx,0xc(%eax)
08ac465c +0x1e6:  jmp    08ac473a <+0x2c4>
08ac4661 +0x1eb:  mov    0x8(%ebp),%eax
08ac4664 +0x1ee:  mov    0xc(%eax),%eax
08ac4667 +0x1f1:  mov    %eax,(%esp)
08ac466a +0x1f4:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac466f +0x1f9:  mov    %eax,%edx
08ac4671 +0x1fb:  mov    0x8(%ebp),%eax
08ac4674 +0x1fe:  mov    %edx,0x18(%eax)
08ac4677 +0x201:  mov    0x8(%ebp),%eax
08ac467a +0x204:  mov    0xc(%eax),%edx
08ac467d +0x207:  mov    0x8(%ebp),%eax
08ac4680 +0x20a:  mov    0x8(%eax),%eax
08ac4683 +0x20d:  sub    %eax,%edx
08ac4685 +0x20f:  mov    0x8(%ebp),%eax
08ac4688 +0x212:  mov    0x18(%eax),%ecx
08ac468b +0x215:  mov    0x8(%ebp),%eax
08ac468e +0x218:  mov    0x8(%eax),%eax
08ac4691 +0x21b:  lea    (%ecx,%eax,1),%eax
08ac4694 +0x21e:  mov    %edx,0x8(%esp)
08ac4698 +0x222:  movl   $0x0,0x4(%esp)
08ac46a0 +0x22a:  mov    %eax,(%esp)
08ac46a3 +0x22d:  call   0807dcc0 <_init+0x5b8>
08ac46a8 +0x232:  mov    0x8(%ebp),%eax
08ac46ab +0x235:  mov    0x8(%eax),%edx
08ac46ae +0x238:  mov    0x8(%ebp),%eax
08ac46b1 +0x23b:  mov    0x18(%eax),%eax
08ac46b4 +0x23e:  mov    -0x10(%ebp),%ecx
08ac46b7 +0x241:  mov    %ecx,0xc(%esp)
08ac46bb +0x245:  movl   $0x1,0x8(%esp)
08ac46c3 +0x24d:  mov    %edx,0x4(%esp)
08ac46c7 +0x251:  mov    %eax,(%esp)
08ac46ca +0x254:  call   0807dd50 <_init+0x648>
08ac46cf +0x259:  cmp    $0x1,%eax
08ac46d2 +0x25c:  setne  %al
08ac46d5 +0x25f:  test   %al,%al
08ac46d7 +0x261:  je     08ac473a <+0x2c4>
08ac46d9 +0x263:  mov    &stdout,%eax
08ac46de +0x268:  lea    -0x114(%ebp),%edx
08ac46e4 +0x26e:  mov    %edx,0x8(%esp)
08ac46e8 +0x272:  movl   $"fread failed %s",0x4(%esp)
08ac46f0 +0x27a:  mov    %eax,(%esp)
08ac46f3 +0x27d:  call   0807da90 <_init+0x388>
08ac46f8 +0x282:  mov    &stdout,%eax
08ac46fd +0x287:  movl   $&_ZZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac4705 +0x28f:  movl   $0x226,0xc(%esp)
08ac470d +0x297:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac4715 +0x29f:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac471d +0x2a7:  mov    %eax,(%esp)
08ac4720 +0x2aa:  call   0807da90 <_init+0x388>
08ac4725 +0x2af:  mov    -0x10(%ebp),%eax
08ac4728 +0x2b2:  mov    %eax,(%esp)
08ac472b +0x2b5:  call   0807dea0 <_init+0x798>
08ac4730 +0x2ba:  mov    $0x1,%eax
08ac4735 +0x2bf:  jmp    08ac47ea <+0x374>
08ac473a +0x2c4:  cmpl   $0x0,-0x10(%ebp)
08ac473e +0x2c8:  je     08ac474b <+0x2d5>
08ac4740 +0x2ca:  mov    -0x10(%ebp),%eax
08ac4743 +0x2cd:  mov    %eax,(%esp)
08ac4746 +0x2d0:  call   0807dea0 <_init+0x798>
08ac474b +0x2d5:  mov    0x8(%ebp),%eax
08ac474e +0x2d8:  mov    0xc(%eax),%esi
08ac4751 +0x2db:  mov    0x8(%ebp),%eax
08ac4754 +0x2de:  mov    0x18(%eax),%eax
08ac4757 +0x2e1:  mov    %eax,%ebx
08ac4759 +0x2e3:  lea    -0x114(%ebp),%eax
08ac475f +0x2e9:  mov    %eax,(%esp)
08ac4762 +0x2ec:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08ac4767 +0x2f1:  mov    %eax,(%esp)
08ac476a +0x2f4:  call   08ac3b04 <_ZL5_hashPKc>  ; _hash(char const*)
08ac476f +0x2f9:  mov    %esi,0x8(%esp)
08ac4773 +0x2fd:  mov    %ebx,0x4(%esp)
08ac4777 +0x301:  mov    %eax,(%esp)
08ac477a +0x304:  call   08ad34ae <_ZN5Crc325crc32EjPKcj>  ; Crc32::crc32(unsigned int, char const*, unsigned int)
08ac477f +0x309:  mov    0x8(%ebp),%edx
08ac4782 +0x30c:  mov    %eax,0x10(%edx)
08ac4785 +0x30f:  mov    0x8(%ebp),%eax
08ac4788 +0x312:  mov    0xc(%eax),%ecx
08ac478b +0x315:  mov    0x8(%ebp),%eax
08ac478e +0x318:  mov    0x18(%eax),%edx
08ac4791 +0x31b:  mov    0x8(%ebp),%eax
08ac4794 +0x31e:  mov    0x10(%eax),%eax
08ac4797 +0x321:  mov    %ecx,0x8(%esp)
08ac479b +0x325:  mov    %edx,0x4(%esp)
08ac479f +0x329:  mov    %eax,(%esp)
08ac47a2 +0x32c:  call   08ac38be <_ZL8_encryptjPhj>  ; _encrypt(unsigned int, unsigned char*, unsigned int)
08ac47a7 +0x331:  cmp    $0x1,%eax
08ac47aa +0x334:  sete   %al
08ac47ad +0x337:  test   %al,%al
08ac47af +0x339:  je     08ac47e5 <+0x36f>
08ac47b1 +0x33b:  mov    &stdout,%eax
08ac47b6 +0x340:  movl   $&_ZZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac47be +0x348:  movl   $0x24e,0xc(%esp)
08ac47c6 +0x350:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac47ce +0x358:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac47d6 +0x360:  mov    %eax,(%esp)
08ac47d9 +0x363:  call   0807da90 <_init+0x388>
08ac47de +0x368:  mov    $0x1,%eax
08ac47e3 +0x36d:  jmp    08ac47ea <+0x374>
08ac47e5 +0x36f:  mov    $0x0,%eax
08ac47ea +0x374:  add    $0x130,%esp
08ac47f0 +0x37a:  pop    %ebx
08ac47f1 +0x37b:  pop    %esi
08ac47f2 +0x37c:  pop    %ebp
08ac47f3 +0x37d:  ret
```

## 反编译 C

```c
// IndexEntry::update_content_from_file @ 0x8ac4476

/* DWARF original prototype: pack_ret_t update_content_from_file(IndexEntry * this, NCHAR * name,
   PackSet * owner, IPackFileProcess * process) */

pack_ret_t __thiscall
IndexEntry::update_content_from_file
          (IndexEntry *this,NCHAR *name,PackSet *owner,IPackFileProcess *process)

{
  size_t len;
  pack_ret_t pVar1;
  uchar *puVar2;
  int iVar3;
  size_t sVar4;
  char *p;
  hash_t crc;
  uint32 uVar5;
  NCHAR local_118 [260];
  FILE *local_14;
  uint local_10;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: int size@[???] */
  _correct_filename(name,local_118,0x104,(NCHAR *)0x0,0);
  local_14 = fopen(local_118,"rb");
  if (local_14 == (FILE *)0x0) {
    fprintf(stdout,"_tfopen failed %s",local_118);
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1fb,
            "update_content_from_file");
    pVar1 = PACK_ERROR;
  }
  else {
    this->type_ = ENTRY_FILE;
    std::string::operator=((string *)&this->name_,local_118);
    fseek(local_14,0,2);
    local_10 = ftell(local_14);
    if ((int)local_10 < 0) {
      fclose(local_14);
      pVar1 = PACK_ERROR;
    }
    else {
      this->size_ = local_10;
      fseek(local_14,0,0);
      this->aligned_size_ = this->size_ + 3 & 0xfffffffc;
      if (this->size_ == 0) {
        puVar2 = operator_new__(4);
        this->content_ = puVar2;
        puVar2 = this->content_;
        puVar2[0] = '\0';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
      }
      else if (process == (IPackFileProcess *)0x0) {
        puVar2 = operator_new__(this->aligned_size_);
        this->content_ = puVar2;
        memset(this->content_ + this->size_,0,this->aligned_size_ - this->size_);
        sVar4 = fread(this->content_,this->size_,1,local_14);
        if (sVar4 != 1) {
          fprintf(stdout,"fread failed %s",local_118);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x226,
                  "update_content_from_file");
          fclose(local_14);
          return PACK_ERROR;
        }
      }
      else {
        fclose(local_14);
        local_14 = (FILE *)0x0;
        iVar3 = (*process->_vptr_IPackFileProcess[2])(process,name,&this->content_,&this->size_);
        if (iVar3 == 1) {
          return PACK_ERROR;
        }
        this->aligned_size_ = this->size_ + 3 & 0xfffffffc;
      }
      if (local_14 != (FILE *)0x0) {
        fclose(local_14);
      }
      len = this->aligned_size_;
      puVar2 = this->content_;
      p = toMbcs(local_118);
      crc = _hash(p);
      uVar5 = Crc32::crc32(crc,(char *)puVar2,len);
      this->crc_ = uVar5;
      pVar1 = _encrypt(this->crc_,this->content_,this->aligned_size_);
      if (pVar1 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x24e,
                "update_content_from_file");
        pVar1 = PACK_ERROR;
      }
      else {
        pVar1 = PACK_OK;
      }
    }
  }
  return pVar1;
}
```
