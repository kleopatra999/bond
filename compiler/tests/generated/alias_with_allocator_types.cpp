
#include "alias_with_allocator_reflection.h"
#include <bond/core/exception.h>

namespace test
{
    
    const bond::Metadata foo::Schema::metadata
        = foo::Schema::GetMetadata();
    
    const bond::Metadata foo::Schema::s_l_metadata
        = bond::reflection::MetadataInit("l");
    
    const bond::Metadata foo::Schema::s_v_metadata
        = bond::reflection::MetadataInit("v");
    
    const bond::Metadata foo::Schema::s_s_metadata
        = bond::reflection::MetadataInit("s");
    
    const bond::Metadata foo::Schema::s_m_metadata
        = bond::reflection::MetadataInit("m");
    
    const bond::Metadata foo::Schema::s_s_metadata
        = bond::reflection::MetadataInit("s");
    
    const bond::Metadata foo::Schema::s_d_metadata
        = bond::reflection::MetadataInit("d");
    
    const bond::Metadata foo::Schema::s_l1_metadata
        = bond::reflection::MetadataInit(bond::nothing, "l1");
    
    const bond::Metadata foo::Schema::s_v1_metadata
        = bond::reflection::MetadataInit(bond::nothing, "v1");
    
    const bond::Metadata foo::Schema::s_s1_metadata
        = bond::reflection::MetadataInit(bond::nothing, "s1");
    
    const bond::Metadata foo::Schema::s_m1_metadata
        = bond::reflection::MetadataInit(bond::nothing, "m1");
    
    const bond::Metadata foo::Schema::s_s1_metadata
        = bond::reflection::MetadataInit(bond::nothing, "s1");

    
} // namespace test
